#include "ft_printf.h"
#include <stdio.h>

void	ft_print_c(int c, t_print *tab)
{
	int	len;

	len = 1;
	if (tab->dot != -1 && tab->dot < len)
		len = tab->dot;
	while (tab->width > len)
	{
		ft_putchar(' ', tab);
		tab->width--;
	}
	ft_putchar((unsigned char)c, tab);
}
