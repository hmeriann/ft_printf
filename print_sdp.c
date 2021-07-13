#include "ft_printf.h"

void	ft_print_d(int number, t_print *tab)
{
	char	*str;
	int		len;
	char	sym;
	long long	nbr;

	nbr = number;
	tab->isnegative = 0;
	sym = ' ';
	if (tab->zero_prefix == 1 && tab->width > len && tab->tochnost <= 0) // тут было только про префикс условие
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
	str = ft_itoa(nbr, 10);
	len = ft_strlen(str);
	if (tab->tochnost >= 0)
	{
		if (tab->tochnost >= tab->width)
		{
			if (tab->isnegative)
				ft_putchar('-', tab);
			while (tab->tochnost-- > len)
				ft_putchar('0', tab);
			ft_putstr(str, len, tab);
		}
		else // точность меньше ширины
		{
			if (tab->left_align == 0)
			{
				if (tab->tochnost == 0)
					while (tab->width-- > len) // тут была точность
						ft_putchar(' ', tab);
				else
					while (tab->width-- > tab->tochnost)
						ft_putchar(' ', tab);
			}
			if (tab->isnegative)
				ft_putchar('-', tab);
			while (tab->tochnost-- > len)
			{
				ft_putchar('0', tab);
				tab->width--;
			}
			ft_putstr(str, len, tab);
			if (tab->left_align == 1)
				while (tab->width-- > len)
					ft_putchar(' ', tab);
		}
	}
	else // tochnost == -1
	{
		if (tab->isnegative)
			ft_putchar('-', tab);
		if (tab->left_align == 0)
		{
			if (tab->zero_prefix)
				while (tab->width-- > len)
				ft_putchar('0', tab);
			while (tab->width-- > len)
				ft_putchar(' ', tab);
		}
		ft_putstr(str, len, tab);
		if (tab->left_align == 1)
			while (tab->width-- > len)
				ft_putchar(' ', tab);
	}
	free(str);
}

void	ft_print_p(unsigned long long number, t_print *tab)
{
	char	*str;
	int		len;

	if (tab->tochnost == 0 && number == 0)
	{
		ft_putstr("0x", 2, tab);
		return ;
	}
	str = ft_itoa(number, 16);
	len = ft_strlen(str);
	if (tab->tochnost != -1 && tab->tochnost > len)
		len = tab->tochnost;
	if (tab->left_align == 1)
	{
		ft_putstr("0x", 2, tab);
		ft_putstr(str, ft_strlen(str), tab);
		while (tab->width > (len + 2))
		{
			ft_putchar(' ', tab);
			tab->width--;
		}
	}
	if (tab->left_align == 0)
	{
		while (tab->width > (len + 2))
		{
			ft_putchar(' ', tab);
			tab->width--;
		}
		ft_putstr("0x", 2, tab);
		ft_putstr(str, ft_strlen(str), tab);
	}
	free(str);
}

void	ft_print_u(unsigned int number, t_print *tab)
{
	char	*str;
	int		len;
	char	sym;
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
	// if (number < 0)
	// {
	// 	tab->isnegative = 1;
	// 	nbr *= -1;
	// 	tab->width--;
	// }
	str = ft_itoa(nbr, 10);
	len = ft_strlen(str);
	if (tab->left_align == 0) //fight align
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
	else //left align
	{
		if (tab->isnegative == 1)
			ft_putchar('-', tab);
		if (tab->tochnost >= 0)
			while (tab->tochnost-- > len)
			{
				ft_putchar('0', tab);
				tab->width--;
			}
		ft_putstr(str, ft_strlen(str), tab);
		tab->width -= len;
		while (tab->width-- > 0)
			ft_putchar(' ', tab);
	}
	free(str);
}
