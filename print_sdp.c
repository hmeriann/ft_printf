#include "ft_printf.h"

void	ft_print_d(long number, t_print *tab)
{
	char	*str;
	int		len;
	char	sym;

	tab->dash = 0;
	sym = ' ';
	if (tab->zero_padding == 1)
		sym = '0';
	if (!number && tab->tochnost == 0)
	{
		while (tab->width--)
			ft_putchar(sym, tab);
	}
	if (number < 0)
	{
		tab->dash = 1;
		number *= -1;
		tab->width--;
	}
	str = ft_itoa(number, 10);
	len = ft_strlen(str);
	if (tab->tochnost >= 0 && tab->tochnost > len)
		while (tab->width-- > tab->tochnost)
			ft_putchar(sym, tab);
	else
		while (tab->width-- > len)
			ft_putchar(sym, tab);
	if (tab->dash == 1)
		ft_putchar('-', tab);
	while (tab->tochnost-- > len)
		ft_putchar('0', tab);
	ft_putstr(str, ft_strlen(str), tab);
	// if (tab->tochnost >= 0 && tab->tochnost > len)
	// 	len = tab->tochnost;
	// if (!number && !tab->tochnost)
	// 	len = 0;
	// if (tab->dash == 1)
	// 	ft_putchar('-', tab);
	// if (tab->zero_padding == 1)
	// {
	// 	while (len > ft_strlen(str))
	// 	{
	// 		ft_putchar('0', tab);
	// 		len--;
	// 	}
	// }
	// if (tab->dash == 1 && tab->tochnost != 0)
	// 	ft_putstr(str, ft_strlen(str), tab);
	// while (tab->width > len)
	// {
	// 	ft_putchar(' ', tab);
	// 	tab->width--;
	// }
	// if (tab->dash == 0 && tab->tochnost != 0)
	// 	ft_putstr(str, ft_strlen(str), tab);
	free(str);
}

void	ft_print_p(unsigned long number, t_print *tab)
{
	char	*str;
	int		len;

	str = ft_itoa(number, 16);
	len = ft_strlen(str);
	if (tab->tochnost != -1 && tab->tochnost > len)
		len = tab->tochnost;
	if (tab->dash == 1)
		ft_putstr(str, ft_strlen(str), tab);
	while (tab->width > (len + 2))
	{
		ft_putchar(' ', tab);
		tab->width--;
	}
	ft_putstr("0x", 2, tab);
	while (len > ft_strlen(str))
	{
		ft_putchar('0', tab);
		len--;
	}
	if (tab->dash == 0)
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
