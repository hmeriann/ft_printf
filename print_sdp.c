#include "ft_printf.h"

void	ft_print_d(long number, t_print *tab)
{
	char	*str;
	int		len;
	int		sign;

	sign = 0;
	if (number < 0)
	{
		sign = 1;
		number *= -1;
	}
	str = ft_itoa(number, 10);
	len = ft_strlen(str);
	if (tab->dot != -1 && tab->dot > len)
		len = tab->dot;
	if (sign == 1 && tab->width > 0)
		tab->width--;
	while (tab->width-- > len)
		ft_putchar(' ', tab);
	if (sign == 1)
		ft_putchar('-', tab);
	while (len-- > ft_strlen(str))
		ft_putchar('0', tab);
	ft_putstr(str, ft_strlen(str), tab);
	free(str);
}

void	ft_print_str(char *str, t_print *tab)
{
	int	len;

	len = ft_strlen(str);
	if (tab->dot != -1 && tab->dot < len)
		len = tab->dot;
	while (tab->width > len)
	{
		ft_putchar(' ', tab);
		tab->width--;
	}
	ft_putstr(str, len, tab);
}

void	ft_print_p(unsigned long number, t_print *tab)
{
	char	*str;
	int		len;

	str = ft_itoa(number, 16);
	len = ft_strlen(str);
	if (tab->dot != -1 && tab->dot > len)
		len = tab->dot - 2;
	while (tab->width > len)
	{
		ft_putchar(' ', tab);
		tab->width--;
	}
	while (len > ft_strlen(str))
	{
		ft_putchar('0', tab);
		len--;
	}
	ft_print_str("0x", tab);
	ft_putstr(str, ft_strlen(str), tab);
	free(str);
}

//5) printf : |0x7ffee20a27fc|

//ft_printf : |   0xffffffffe20a27fc|
//total printed with ft_printf = 36
