#include "ft_printf.h"

void	print_rightalign(char *str, char sym, int len, t_print *tab)
{
	if (tab->tochnost >= 0 && tab->tochnost > len)
		while (tab->width-- - tab->tochnost > 0)
			ft_putchar(sym, tab);
	else
		while (tab->width-- - len > 0)
			ft_putchar(sym, tab);
	if (tab->isnegative == 1)
		ft_putchar('-', tab);
	if (tab->tochnost >= 0)
		while (tab->tochnost-- > len)
			ft_putchar('0', tab);
	ft_putstr(str, ft_strlen(str), tab);
}

void	print_leftalign(char *str, int len, t_print *tab)
{
	if (tab->isnegative == 1)
		ft_putchar('-', tab);
	if (tab->tochnost >= 0)
	{
		while (tab->tochnost-- > len)
		{
			ft_putchar('0', tab);
			tab->width--;
		}
	}
	ft_putstr(str, ft_strlen(str), tab);
	tab->width -= len;
	while (tab->width-- > 0)
		ft_putchar(' ', tab);
}

void	print_uppx(long long nbr, char sym, t_print *tab)
{
	char		*str;
	int			len;

	str = ft_itoa_upperx(nbr, 16);
	len = ft_strlen(str);
	if (tab->left_align == 0)
		print_rightalign(str, sym, len, tab);
	else
		print_leftalign(str, len, tab);
	free(str);
}

void	ft_print_upperx(unsigned long number, t_print *tab)
{
	char		sym;
	long long	nbr;

	nbr = number;
	tab->isnegative = 0;
	sym = ' ';
	if (tab->zero_prefix == 1)
		sym = '0';
	if (!number && tab->tochnost == 0)
	{
		while (tab->width--)
			ft_putchar(sym, tab);
		return ;
	}
	if (number < 0)
	{
		tab->isnegative = 1;
		nbr *= -1;
		tab->width--;
	}
	print_uppx(nbr, sym, tab);
}
