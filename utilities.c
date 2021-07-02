#include "ft_printf.h"

void	ft_putchar(char c, t_print *tab)
{
	write(1, &c, 1);
	tab->total_length = tab->total_length + 1;
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

void	ft_putstr(char *str, int len, t_print *tab)
{
	while (*str != '\0' && len > 0)
	{
		ft_putchar(*str, tab);
		str++;
		len--;
	}
}
