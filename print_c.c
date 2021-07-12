#include "ft_printf.h"

void	ft_print_c(int c, t_print *tab)
{
	int	len;

	len = 1;
	if (tab->tochnost != -1 && tab->tochnost < len)
		len = tab->tochnost;
	if (tab->left_align == 1)
		ft_putchar((unsigned char)c, tab);
	while (tab->width > len)
	{
		ft_putchar(' ', tab);
		tab->width--;
	}
	if (tab->left_align == 0)
		ft_putchar((unsigned char)c, tab);
}