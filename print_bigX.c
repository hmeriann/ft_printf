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

	str = ft_itoa_X(number, 16);
	len = ft_strlen(str);
	if (tab->tochnost != -1 && tab->tochnost > len)
		len = tab->tochnost;
	if (tab->dash == 1)
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
	if (tab->dash == 0)
		ft_putstr(str, ft_strlen(str), tab);
	free(str);
}
