#include <stdio.h>

#include "ft_printf.h"

int	main(void)
{
	// int		nu = -98;
	char	z = 'B';

// printf("1) printf : |%.3s|\n\n", NULL);
// ft_printf("ft_printf : |%.3s|\n\n", NULL);
// // printf("2) printf : Magic  |%-.5d|\n", -8, -42);
// // ft_printf("ft_printf : Magic  |%-.5d|\n\n", -8, -42);
// 	printf("3) printf : Hexadecimal for %d is |%100.050x|\n", -42, -42);
// 	ft_printf("ft_printf : Hexadecimal for %d is |%100.050x|\n\n", -42, -42);
// 	printf("3a) printf : Hexadecimal for %d is %10.5X\n", -42, -42);
// 	ft_printf(" ft_printf : Hexadecimal for %d is %10.5X\n\n", -42, -42);
// printf("5) printf : |%p|\n", &nu);
// ft_printf("ft_printf : |%p|\n\n", &nu);
// printf("28 - |%-*c|\n", 10, '1');
// ft_printf("28 - |%-*c|\n\n", 10, '1');
// printf("30 - | -%-*c* -%-*c* |\n", 2, 0, -2, 0);
// ft_printf("30 - | -%-*c* -%-*c* |\n\n", 2, 0, -2, 0);
// printf("32 - | -%-*c* -%-*c* |\n", 2, 0, -2, 0);
// ft_printf("32 - | -%-*c* -%-*c* |\n\n", 2, 0, -2, 0);
// printf("15 - |%*c%*c|\n", -10, '0', 10, '1');
// ft_printf("15 - |%*c%*c|\n\n", -10, '0', 10, '1');
// printf("19 - |%-10c%*c%c*|\n",'0', 10, '1', '2');
// ft_printf("19 - |%-10c%*c%c*|\n\n",'0', 10, '1', '2');
// printf("33 - | -%-2c* -%2c* |\n", 0, 0);
// ft_printf("33 - | -%-2c* -%2c* |", 0, 0);
// printf("7) printf : Magic  |%05u|\n", 0);
// ft_printf("ft_printf : Magic  |%05u|\n\n", 0);

	printf("| %-4s |\n", "123");
	ft_printf("| %-4s |", "123");
	return (0);
}
