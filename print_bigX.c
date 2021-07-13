#include "ft_printf.h"

static void	find_num_X(int len, unsigned long number, int base, char *str)
{
	while (len > 0)
	{
		str[len - 1] = number % base;
		if (number % base > 9)
			str[len - 1] += 'A' - 10;
		else
			str[len - 1] += '0';
		number /= base;
		len--;
	}
}

char	*ft_itoa_X(unsigned long number, int base)
{
	unsigned long	tmp_num;
	int				len;
	char			*str;

	tmp_num = number;
	len = 0;
	str = NULL;
	if (number == 0)
		len += 1;
	while (tmp_num > 0)
	{
		tmp_num /= base;
		len += 1;
	}
	str = (char *)malloc(sizeof(len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	find_num_X(len, number, base, str);
	return (str);
}

void	ft_print_X(unsigned long number, t_print *tab)
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
	if (number < 0)
	{
		tab->isnegative = 1;
		nbr *= -1;
		tab->width--;
	}
	str = ft_itoa_X(nbr, 16);
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
