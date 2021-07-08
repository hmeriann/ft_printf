#include "ft_printf.h"

void	ft_print_p(unsigned long number, t_print *tab)
{
	char	*str;
	int		len;

	str = ft_itoa(number, 16);
	len = ft_strlen(str);
	ft_print_str("0x", tab);
	ft_putstr(str, ft_strlen(str), tab);
	free(str);
}

void	ft_print_d(long number, t_print *tab)
{
	char	*str;
	int		len;

	tab->dash = 0;
	if (number < 0)
	{
		tab->dash = 1;
		number *= -1;
	}
	str = ft_itoa(number, 10);
	len = ft_strlen(str);
	if (!number)
		len = 0;
	if (number >= -2147483648 && tab->dash == 1)
		ft_putchar('-', tab);
	ft_putstr(str, ft_strlen(str), tab);
	free(str);
}

void	ft_print_u(unsigned int number, t_print *tab)
{
	char	*str;
	int		len;

	tab->dash = 0;
	if (number < 0)
	{
		tab->dash = 1;
		number *= -1;
	}
	str = ft_itoa(number, 10);
	len = ft_strlen(str);
	if (tab->dash == 1)
		ft_putchar('-', tab);
	ft_putstr(str, ft_strlen(str), tab);
	free(str);
}
