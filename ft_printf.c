#include "ft_printf.h"

#include <stdio.h>

t_print	*ft_init_tab(t_print *tab)
{
	tab->index = 0;
	tab->isnegative = 0;
	tab->left_align = 0;
	tab->zero_prefix = 0;
	tab->width = 0;
	tab->dot = 0;
	tab->tochnost = -1;
	tab->total_length = 0;
	return (tab);
}

static int	parcewidth(const char *str, t_print *tab, va_list ap)
{
	if (str[tab->index] == '*')
	{
		tab->width = va_arg(ap, int);
		if (tab->width < 0)
		{
			tab->left_align = 1;
			tab->width *= -1;
		}
		tab->index = tab->index + 1;
	}
	while (ft_isdigit(str[tab->index]))
	{
		tab->width = tab->width * 10 + (str[tab->index] - '0');
		tab->index = tab->index + 1;
	}
	return (tab->index);
}

static int	parcetochn(const char *str, t_print *tab, va_list ap)
{
	tab->dot = 1;
	tab->tochnost = 0;
	tab->index = tab->index + 1;
	if (str[tab->index] == '*' || ft_isdigit(str[tab->index]))
	{
		if (str[tab->index] == '*')
		{
			tab->tochnost = va_arg(ap, int);
			if (tab->tochnost < 0)
				tab->tochnost = -1;
			tab->index = tab->index + 1;
		}
		while (ft_isdigit(str[tab->index]))
		{
			tab->tochnost = tab->tochnost * 10 + (str[tab->index] - '0');
			tab->index = tab->index + 1;
		}
		tab->zero_prefix = 0;
	}
	return (tab->index);
}

static int	parceflags(const char *str, t_print *tab, va_list ap)
{
	if (str[tab->index] == '-' && str[tab->index + 1] != '\0')
	{
		tab->left_align = 1;
		tab->index = tab->index + 1;
	}
	if (str[tab->index] == '0' && str[tab->index + 1] != '\0')
	{
		tab->zero_prefix = 1;
		tab->index = tab->index + 1;
	}
	if (str[tab->index] == '*' || ft_isdigit(str[tab->index]))
		parcewidth(str, tab, ap);
	if (str[tab->index] == '.' && str[tab->index + 1] != '\0')
		parcetochn(str, tab, ap);
	return (tab->index);
}

static void	parcespec(const char *str, t_print *tab, va_list ap)
{
	if (str[tab->index] == 's')
		ft_print_str(va_arg(ap, char *), tab);
	else if (str[tab->index] == 'x')
		ft_print_x(va_arg(ap, unsigned int), tab);
	else if (str[tab->index] == 'X')
		ft_print_upperx(va_arg(ap, unsigned int), tab);
	else if (str[tab->index] == 'd' || str[tab->index] == 'i')
		ft_print_d(va_arg(ap, int), tab);
	else if (str[tab->index] == '%')
		ft_putchar(str[tab->index], tab);
	else if (str[tab->index] == 'c')
		ft_print_c(va_arg(ap, int), tab);
	else if (str[tab->index] == 'u')
		ft_print_u(va_arg(ap, unsigned int), tab);
	else if (str[tab->index] == 'p')
		ft_print_p(va_arg(ap, unsigned long long), tab);
	else
		// ft_putchar(str[tab->index], tab);
		tab->index = tab->index + 1;
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	t_print	*tab;

	i = 0;
	tab = (t_print *)malloc(sizeof (t_print));
	if (!tab)
		return (-1);
	va_start(ap, str);
	ft_init_tab(tab);
	while (str[tab->index] != '\0')
	{
		tab->left_align = 0;
		if (str[tab->index] == '%' && str[tab->index + 1] != '\0')
		{
			tab->width = 0;
			tab->tochnost = -1;
			// tab->zero_prefix = 0;
			tab->index = tab->index + 1;
			while (str[tab->index] == '0' || str[tab->index] == '-')
				parceflags(str, tab, ap);
			if (str[tab->index] == '*' || ft_isdigit(str[tab->index]))
				parcewidth(str, tab, ap);
			if (str[tab->index] == '.' && str[tab->index + 1] != '\0')
				parcetochn(str, tab, ap);
			parcespec(str, tab, ap);
		}
		else
			ft_putchar(str[tab->index], tab);
		tab->index = tab->index + 1;
	}
	va_end(ap);
	i = tab->total_length;
	free(tab);
	return (i);
	// return (printf("total printed with ft_printf = %d\n\n", tab->total_length));
}
