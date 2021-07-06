#include <stdio.h>

#include "ft_printf.h"

int	main(void)
{
// // 	int		nu = -98;
	char	z = 'B';

// printf("1) printf : |%.3s|\n\n", NULL);
// ft_printf("ft_printf : |%.3s|\n\n", NULL);
// // printf("2) printf : Magic  |%-.5d|\n", -8, -42);
// // ft_printf("ft_printf : Magic  |%-.5d|\n\n", -8, -42);
// 	printf("3) printf : Hexadecimal for %d is |%100.050x|\n", -42, -42);
// 	ft_printf("ft_printf : Hexadecimal for %d is |%100.050x|\n\n", -42, -42);
// 	printf("3a) printf : Hexadecimal for %d is %10.5X\n", -42, -42);
// 	ft_printf(" ft_printf : Hexadecimal for %d is %10.5X\n\n", -42, -42);
// 	printf("4) printf : |%.5s|\n", ft_itoa(0xab54321, 16));
// 	ft_printf("ft_printf : |%.5s|\n\n", ft_itoa(0xab54321, 16));
// 	printf("5) printf : |%7p|\n", &nu);
// 	ft_printf("ft_printf : |%7p|\n\n", &nu);
	printf("6) printf : Char |%*c|\n", -10, '0');
	ft_printf("ft_printf : Char |%*c|", -10, '0');
// // printf("7) printf : Magic  |%05u|\n", 0);
// // ft_printf("ft_printf : Magic  |%05u|\n\n", 0);

	return (0);
}