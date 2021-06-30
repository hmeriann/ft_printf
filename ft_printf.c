#include <stdio.h>

#include "ft_printf.h"

int	g_result;
int	g_width;
int	g_dot;

static void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_result += 1;
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

static void	ft_putstr(char *str, int len)
{
	while (*str != '\0' && len > 0)
	{
		ft_putchar(*str);
		str++;
		len--;
	}
}

static void	ft_printf_str(char *str, t_print *tab)
{
	int	len;

	len = ft_strlen(str);
	if (tab->dot != -1 && tab->dot < len)
		len = tab->dot;
	while (tab->width > len)
	{
		ft_putchar(' ');
		tab->width--;
	}
	ft_putstr(str, len);
}

static char	*ft_itoa(unsigned long number, int base)
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
	while (len > 0)
	{
		str[len - 1] = number % base;
		if (number % base > 9)
			str[len - 1] += 'a' - 10;
		else
			str[len - 1] += '0';
		number /= base;
		len--;
	}
	return (str);
}

static void	ft_print_x(unsigned long number, t_print *tab)
{
	char	*str;
	int		len;

	str = ft_itoa(number, 16);
	len = ft_strlen(str);
	if (tab->dot != -1 && tab->dot > len)
		len = tab->dot;
	while (tab->width > len)
	{
		ft_putchar(' ');
		tab->width--;
	}
	while (len > ft_strlen(str))
	{
		ft_putchar('0');
		len--;
	}
	ft_putstr(str, ft_strlen(str));
	free(str);
}

static void	ft_print_d(long number, t_print *tab)
{
	char	*str;
	int		len;
	int		sign;

	sign = 0;
	if (number < 0)
	{
		sign = 1;
		number *= -1;
	}
	str = ft_itoa(number, 10);
	len = ft_strlen(str);
	if (tab->dot != -1 && tab->dot > len)
		len = tab->dot;
	if (sign == 1 && tab->width > 0)
		tab->width--;
	while (tab->width > len)
	{
		ft_putchar(' ');
		tab->width--;
	}
	if (sign == 1)
		ft_putchar('-');
	while (len > ft_strlen(str))
	{
		// printf("*****");
		ft_putchar('0');
		len--;
	}
	ft_putstr(str, ft_strlen(str));
	free(str);
}

t_print	*ft_init_tab(t_print *tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero_padding = 0;
	tab->dot = -1;
	tab->dash = 0;
	tab->sign = 0;
	tab->total_length = 0;
	tab->is_zero = 0;
	tab->percent = 0;
	tab->space_flag = 0;
	return (tab);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	t_print	*tab;

	i = 0;
	tab = (t_print *)malloc(sizeof (t_print));
	if (!tab)
		return (-1);
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			ft_init_tab(tab);
			while (ft_isdigit(str[i]))
			{
				tab->width = tab->width * 10 + (str[i] - '0');
				i++;
			}
			if (str[i] == '.')
			{
				tab->dot = 0;
				i++;
				while (ft_isdigit(str[i]))
				{
					tab->dot = tab->dot * 10 + (str[i] - '0');
					i++;
				}
			}
			if (str[i] == 's')
				ft_printf_str(va_arg(ap, char *), tab);
			else if (str[i] == 'x')
				ft_print_x(va_arg(ap, unsigned int), tab);
			else if (str[i] == 'd')
				ft_print_d(va_arg(ap, int), tab);
			else
				ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	// return (tab->total_length);
}

// int	ft_printf(const char *format, ...)
// {
// 	t_print	*tab;
// 	int		ret;
// 	int		i;

// 	tab = (t_print *)malloc(sizeof(t_print));
// 	if (!tab)
// 		return (-1);
// 	ft_init_tab(tab);
// 	va_start(tab->args, format);
// 	i = -1;
// 	ret = 0;
// 	while (format[++i])
// 	{
// 		if (format[i] == '%')
// 			i = ft_eval_format(tab, format);
// 		else
// 			ret += write(1, &format[i], 1);
// 	}
// 	va_end(tab->args);
// 	ret += tab->total_length;
// 	free(tab);
// 	return (ret);
// }

int	main(void)
{
	char	*str = "Hello";

	printf("1) printf : |%10.20s|\n\n", "toto");
	ft_printf("ft_printf : |%10.20s|\n\n", "toto");
	printf("2) printf : Magic %s is %10.5d\n\n", "number", 42);
	ft_printf("ft_printf : Magic %s is %10.5d\n\n", "number", 42);
	printf("3) printf : Hexadecimal for %d is %10.5x\n\n", -42, 42);
	ft_printf("ft_printf : Hexadecimal for %d is %10.5x\n\n", -42, 42);
	printf("4) printf : |%.5s|\n\n", ft_itoa(0xab54321,16));
	ft_printf("ft_printf : |%.5s|\n\n", ft_itoa(0xab54321,16));
	return (0);
}
