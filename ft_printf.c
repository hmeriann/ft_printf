#include <stdio.h>

#include "ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
		tab->width = 0;
		tab->precision = 0;
		tab->zero_padding = 0;
		tab->dot = 0;
		tab->dash = 0;
		tab->sign = 0;
		tab->total_length = 0;
		tab->is_zero = 0;
		tab->percent = 0;
		tab->space_flag = 0;
		return (tab);
}

char	*ft_eval_format(const char *format, t_print *tab)
{
	int	position;

	position = 0;
	while (format != "cspdiuxX%")
	{
		if (format[position] == '.')
		{
			tab->point = 1;
			position++;
		}
		if (format[position] == '-')
		{
			tab->dash = 1;
			position++;
		}
		if (format[position] == 'c')
			ft_printf_char(tab);
		if (format[position] == 's')
			ft_printf_str(tab);
		if (format[position] == 'p')
			ft_printf_ptr(tab);
		if (format[position] == 'd' || format[position] == 'i')
			ft_printf_int(tab);
		if (format[position] == 'u')
			ft_printf_uint(tab);
		if (format[position] == 'x')
			ft_printf_oct(tab);
		if (format[position] == 'X')
			ft_printf_big_oct(tab);
		if (format[position] == '%')
			ft_printf_percent(tab);
	}
}

int ft_printf(const char *format, ...)
{
	t_print	*tab;
	int		ret;
	int		i;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_init_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format);
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab->args);
	ret += tab->total_length;
	free(tab);
	return (ret);
}



int main(void)
{
	char *str = "Hello";

	printf("\n");
	return (0);
}