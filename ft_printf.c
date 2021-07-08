#include "ft_printf.h"

#include <stdio.h>

t_print	*ft_init_tab(t_print *tab)
{
	tab->dash = 0;
	tab->total_length = 0;
	return (tab);
}

static void	parcespec(const char *str, int i, va_list ap, t_print tab)
{
	if (str[i] == 'c')
		ft_print_c(va_arg(ap, int), &tab);
	else if (str[i] == 's')
		ft_print_str(va_arg(ap, char *), &tab);
	else if (str[i] == 'p')
		ft_print_p(va_arg(ap, unsigned long), &tab);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_print_d(va_arg(ap, int), &tab);
	else if (str[i] == 'u')
		ft_print_u(va_arg(ap, unsigned int), &tab);
	else if (str[i] == 'x')
		ft_print_x(va_arg(ap, unsigned int), &tab);
	else if (str[i] == 'X')
		ft_print_X(va_arg(ap, unsigned int), &tab);
	else
		ft_putchar(str[i], &tab);
}

static void	printspec(const char *str, int i, va_list ap, t_print tab)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			parcespec(str, i, ap, tab);
		}
		else
			ft_putchar(str[i], &tab);
		i++;
	}
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
	printspec(str, i, ap, *tab);
	va_end(ap);
	// printf("%d\n", tab->total_length);
	i = tab->total_length;
	free(tab);
	// printf("%d", i);
	return (i);
}
