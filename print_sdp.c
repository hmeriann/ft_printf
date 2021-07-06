#include "ft_printf.h"

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
	if (tab->tochnost > 0 && tab->tochnost > len)
		len = tab->tochnost;
	if (!number && !tab->tochnost)
		len = 0;
	if (tab->dash == 1 && tab->width > 0)
		tab->width--;
	if (tab->dash == 1 && number > -2147483648)
		ft_putchar('-', tab);
	if (tab->zero_padding == 1)
	{
		while (len > ft_strlen(str))
		{
			ft_putchar('0', tab);
			len--;
		}
	}
	if (tab->dash == 1 && tab->tochnost != 0)
		ft_putstr(str, ft_strlen(str), tab);
	while (tab->width > len)
	{
		ft_putchar(' ', tab);
		tab->width--;
	}
	if (tab->dash == 0 && tab->tochnost != 0)
		ft_putstr(str, ft_strlen(str), tab);
	free(str);
}

void	ft_print_p(unsigned long number, t_print *tab)
{
	char	*str;
	int		len;

	str = ft_itoa(number, 16);
	len = ft_strlen(str);
	if (tab->tochnost != -1 && tab->tochnost > len)
		len = tab->tochnost - 2;
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
	if (tab->tochnost > 0 && tab->tochnost > len)
		len = tab->tochnost;
	if (!number && !tab->tochnost)
		len = 0;
	if (tab->dash == 1 && tab->width > 0)
		tab->width--;
	if (tab->dash == 1)
		ft_putchar('-', tab);
	if (tab->dash == 1 && tab->tochnost != 0)
		ft_putstr(str, ft_strlen(str), tab);
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
	if (tab->dash == 0 && tab->tochnost != 0)
		ft_putstr(str, ft_strlen(str), tab);
	free(str);
}
