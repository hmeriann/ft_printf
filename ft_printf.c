#include "ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero_padding = 0;
	tab->tochnost = -1;
	tab->dash = 0;
	tab->sign = 0;
	tab->total_length = 0;
	tab->is_zero = 0;
	tab->percent = 0;
	tab->space_flag = 0;
	return (tab);
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
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			if (str[i] == '-' && str[i + 1] != '\0')
			{
				tab->dash = 1;
				i++;
			}
			if (str[i] == '0' && str[i + 1] != '\0')
			{
				tab->zero_padding = 1;
				i++;
			}
			if (str[i] == '*' || ft_isdigit(str[i]))
			{
				if (str[i] == '*')
				{
					tab->width = va_arg(ap, int);
					if (tab->width < 0)
						tab->width = -1;
					i++;
				}
				tab->width = 0;
				while (ft_isdigit(str[i]))
				{
					tab->width = tab->width * 10 + (str[i] - '0');
					i++;
				}
			}
			
			if (str[i] == '.' && str[i + 1] != '\0')
			{
				tab->tochnost = 0;
				i++;
				while (ft_isdigit(str[i]))
				{
					tab->tochnost = tab->tochnost * 10 + (str[i] - '0');
					i++;
				}
			}
			if (str[i] == 's')
				ft_print_str(va_arg(ap, char *), tab);
			else if (str[i] == 'x')
				ft_print_x(va_arg(ap, unsigned int), tab);
			else if (str[i] == 'X')
				ft_print_X(va_arg(ap, unsigned int), tab);
			else if (str[i] == 'd' || str[i] == 'i')
				ft_print_d(va_arg(ap, int), tab);
			else if (str[i] == '%')
				ft_putchar(str[i], tab);
			else if (str[i] == 'c')
				ft_print_c(va_arg(ap, int), tab);
			else if (str[i] == 'u')
				ft_print_u(va_arg(ap, unsigned int), tab);
			else if (str[i] == 'p')
				ft_print_p(va_arg(ap, unsigned long), tab);
			else
				ft_putchar(str[i], tab);
		}
		else
			ft_putchar(str[i], tab);
		i++;
	}
	va_end(ap);
	i = tab->total_length;
	free(tab);
	return (i);
	// return (printf("total printed with ft_printf = %d\n\n", tab->total_length));
}
