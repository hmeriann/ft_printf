#include <stdio.h>

#include "ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->width = 0;
	// tab->precision = 0;
	tab->zero_padding = 0;
	tab->dot = -1;
	tab->dash = 0;
	tab->sign = 0;
	tab->total_length = 0;
	// tab->is_zero = 0;
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
			if (str[i] == '-')
			{
				tab->dash = 1;
				i++;
			}
			while (ft_isdigit(str[i]))
			{
				tab->width = tab->width * 10 + (str[i] - '0');
				i++;
			}
			if (str[i] == '.')
			{
				tab->dot = 0;
				i++;
				while (ft_isdigit(str[i]))
				{
					tab->dot = tab->dot * 10 + (str[i] - '0');
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

// int	main(void)
// {
// 	int		nu = -98;
// 	char	z = 'B';

// 	printf("1) printf : |%10s|\n\n", "toto");
// 	ft_printf("ft_printf : |%10s|\n\n", "toto");
// 	printf("2) printf : Magic  |%10.5d|\n", 42);
// 	ft_printf("ft_printf : Magic  |%10.5d|\n\n", 42);
// 	printf("3) printf : Hexadecimal for %d is |%100.050x|\n", -42, -42);
// 	ft_printf("ft_printf : Hexadecimal for %d is |%100.050x|\n\n", -42, -42);
// 	printf("3a) printf : Hexadecimal for %d is %10.5X\n", -42, -42);
// 	ft_printf(" ft_printf : Hexadecimal for %d is %10.5X\n\n", -42, -42);
// 	printf("4) printf : |%.5s|\n", ft_itoa(0xab54321, 16));
// 	ft_printf("ft_printf : |%.5s|\n\n", ft_itoa(0xab54321, 16));
// 	printf("5) printf : |%7p|\n", &nu);
// 	ft_printf("ft_printf : |%7p|\n\n", &nu);
// 	printf("6) printf : Char %% %is %5c\n", z, z);
// 	ft_printf("ft_printf : Char %% %is %5c\n\n", z, z);
// 	printf("7) printf : Magic  |%u|\n", 0);
// 	ft_printf("ft_printf : Magic  |%u|\n\n", 0);

// 	return (0);
// }
