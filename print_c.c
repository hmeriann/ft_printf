#include "ft_printf.h"

void	ft_print_c(int c, t_print *tab)
{
	int	len;

	len = 1;
	ft_putchar((unsigned char)c, tab);
}

void	ft_print_str(char *str, t_print *tab)
{
	int	len;

	if (str == 0)
		str = "(null)";
	len = ft_strlen(str);
	ft_putstr(str, len, tab);
}
