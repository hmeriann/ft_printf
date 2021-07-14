#include "ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->index = 0;
	tab->isnegative = 0;
	tab->left_align = 0;
	tab->zero_prefix = 0;
	tab->width = 0;
	tab->dot = 0;
	tab->tochnost = -1;
	tab->total_length = 0;
	return (tab);
}
