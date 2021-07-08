#include <stdio.h>
#include <limits.h>

#include "ft_printf.h"


int main()
{
	int d = 10;
	int i, j;
	printf("printf:    ");
	i = printf("[%#10.5X]", d);
	printf(" (%d)\n", i);
	printf("ft_printf: ");
	j = ft_printf("[%#10.5X]", d);
	printf(" (%d)\n", j);
	return 0;
}

// int	main(void)
// {
// 	int		nu = -98;
// 	char	z = 'B';
// 	int		i;
// 	int		k;

	// printf("C-test\n1) printf : %c\n", '0');
	// ft_printf("ft_printf : %c\n\n", '0');
	// printf("2) printf : %c\n", z);
	// ft_printf("ft_printf : %c\n\n", z);
	// printf("3) printf : %c\n", 'b');
	// ft_printf("ft_printf : %c\n\n", 'b');
	// printf("4) printf : %c\n", '0' - 256);
	// ft_printf("ft_printf : %c\n\n", '0' - 256);
	// printf("5) printf : %c\n", '0' + 256);
	// ft_printf("ft_printf : %c\n\n", '0' + 256);
	// printf("6) printf : %c\n", 0);
	// ft_printf("ft_printf : %c\n\n", 0);
	// printf("7) printf : %c\n", -129);
	// ft_printf("ft_printf : %c\n\n", -129);
	// printf("8) printf : %c\n", 128);
	// ft_printf("ft_printf : %c\n\n", 128);
	// printf("S-test\n1) printf : |%s|\n", NULL);
	// ft_printf("ft_printf : |%s|\n\n", NULL);
	// printf("2) printf : |%s|\n", "");
	// ft_printf("ft_printf : |%s|\n\n", "");
	// printf("3) printf : |%s|\n", "0");
	// ft_printf("ft_printf : |%s|\n\n", "0");
	// printf("4) printf : |%s| %s\n", "", "");
	// ft_printf("ft_printf : |%s| %s\n\n", "", "");
	// printf("5) printf : |%s|\n", "0", "1");
	// ft_printf("ft_printf : |%s|\n\n", "0", "1");
	// printf("6) printf : |%s| %s\n", "123", "4567");
	// ft_printf("ft_printf : |%s| %s\n\n", "123", "4567");
	// i = printf("7) printf : |%s| %s\n", "The minimum field width can be specified", "");
	// printf("7) printf : |%s| %s\n", "The minimum field width can be specified", "");
	// k = ft_printf("ft_printf : |%s| %s\n\n", "The minimum field width can be specified", "");
	// ft_printf("ft_printf : |%s| %s\n\n", "The minimum field width can be specified", "");
	// // printf("8) printf : |%s| %s\n", "", NULL);
	// ft_printf("ft_printf : |%s| %s\n\n", "", NULL);
	// printf("P-test\n1) printf : |%p|\n", -1);
	// ft_printf("ft_printf : |%p|\n\n", -1);
	// printf("2) printf : |%p|\n", 15);
	// ft_printf("ft_printf : |%p|\n\n", 15);
	// printf("3) printf : |%p|\n", 1);
	// ft_printf("ft_printf : |%p|\n\n", 1);
	// printf("4) printf : |%p|\n", 16);
	// ft_printf("ft_printf : |%p|\n\n", 16);
	// printf("5) printf : %p %p \n", LONG_MIN, LONG_MAX);
	// ft_printf("ft_printf : %p %p \n\n", LONG_MIN, LONG_MAX);
	// printf("6) printf : %p %p \n", INT_MIN, INT_MAX);
	// ft_printf("ft_printf : %p %p \n\n", INT_MIN, INT_MAX);
	// printf("7) printf : %p %p \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ft_printf : %p %p \n\n", ULONG_MAX, -ULONG_MAX);
	// printf("8) printf : %p %p \n", 101, 42);
	// ft_printf("ft_printf : %p %p \n\n", 101, 42);
	// printf("D-test\n1) printf : %d %d \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ft_printf : %d %d \n\n", ULONG_MAX, -ULONG_MAX);
	// printf("2) printf : %d %d \n", INT_MAX, INT_MIN);
	// ft_printf("ft_printf : %d %d \n\n", INT_MAX, INT_MIN);
	// printf("3) printf : %d %d \n", CHAR_MAX, CHAR_MIN);
	// ft_printf("ft_printf : %d %d \n\n", CHAR_MAX, CHAR_MIN);
	// printf("4) printf : %d %d \n", UINT_MAX, 0);
	// ft_printf("ft_printf : %d %d \n\n", UINT_MAX, 0);
	// printf("5) printf : %d %d \n", LONG_MAX, LONG_MIN);
	// ft_printf("ft_printf : %d %d \n\n", LONG_MAX, LONG_MIN);
	// printf("6) printf : %d %d \n", LONG_MAX + 1, LONG_MIN - 1);
	// ft_printf("ft_printf : %d %d \n\n", LONG_MAX + 1, LONG_MIN - 1);
	// printf("I-test\n1) printf : %i %i \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ft_printf : %i %i \n\n", ULONG_MAX, -ULONG_MAX);
	// printf("2) printf : %i %i \n", INT_MAX, INT_MIN);
	// ft_printf("ft_printf : %i %i \n\n", INT_MAX, INT_MIN);
	// printf("3) printf : %i %i \n", CHAR_MAX, CHAR_MIN);
	// ft_printf("ft_printf : %i %i \n\n", CHAR_MAX, CHAR_MIN);
	// printf("4) printf : %i %i \n", UINT_MAX, 0);
	// ft_printf("ft_printf : %i %i \n\n", UINT_MAX, 0);
	// printf("5) printf : %i %i \n", LONG_MAX, LONG_MIN);
	// ft_printf("ft_printf : %i %i \n\n", LONG_MAX, LONG_MIN);
	// printf("6) printf : %i %i \n", LONG_MAX + 1, LONG_MIN - 1);
	// ft_printf("ft_printf : %i %i \n\n", LONG_MAX + 1, LONG_MIN - 1);
	// printf("U-test\n1) printf : %u %u \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ft_printf : %u %u \n\n", ULONG_MAX, -ULONG_MAX);
	// printf("2) printf : %u %u \n", INT_MAX, INT_MIN);
	// ft_printf("ft_printf : %u %u \n\n", INT_MAX, INT_MIN);
	// printf("3) printf : %u %u \n", CHAR_MAX, CHAR_MIN);
	// ft_printf("ft_printf : %u %u \n\n", CHAR_MAX, CHAR_MIN);
	// printf("4) printf : %u %u \n", UINT_MAX, 0);
	// ft_printf("ft_printf : %u %u \n\n", UINT_MAX, 0);
	// printf("5) printf : %u %u \n", LONG_MAX, LONG_MIN);
	// ft_printf("ft_printf : %u %u \n\n", LONG_MAX, LONG_MIN);
	// printf("6) printf : %u %u \n", LONG_MAX + 1, LONG_MIN - 1);
	// ft_printf("ft_printf : %u %u \n\n", LONG_MAX + 1, LONG_MIN - 1);
	// printf("x-test\n1) printf : %x %x \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ft_printf : %x %x \n\n", ULONG_MAX, -ULONG_MAX);
	// printf("2) printf : %x %x \n", INT_MAX, INT_MIN);
	// ft_printf("ft_printf : %x %x \n\n", INT_MAX, INT_MIN);
	// printf("3) printf : %x %x \n", CHAR_MAX, CHAR_MIN);
	// ft_printf("ft_printf : %x %x \n\n", CHAR_MAX, CHAR_MIN);
	// printf("4) printf : %x %x \n", UINT_MAX, 0);
	// ft_printf("ft_printf : %x %x \n\n", UINT_MAX, 0);
	// printf("5) printf : %x %x \n", LONG_MAX, LONG_MIN);
	// ft_printf("ft_printf : %x %x \n\n", LONG_MAX, LONG_MIN);
	// printf("6) printf : %x %x \n", LONG_MAX + 1, LONG_MIN - 1);
	// ft_printf("ft_printf : %x %x \n\n", LONG_MAX + 1, LONG_MIN - 1);
	// printf("X-test\n1) printf : %X %X \n", ULONG_MAX, -ULONG_MAX);
	// ft_printf("ft_printf : %X %X \n\n", ULONG_MAX, -ULONG_MAX);
	// printf("2) printf : %X %X \n", INT_MAX, INT_MIN);
	// ft_printf("ft_printf : %X %X \n\n", INT_MAX, INT_MIN);
	// printf("3) printf : %X %X \n", CHAR_MAX, CHAR_MIN);
	// ft_printf("ft_printf : %X %X \n\n", CHAR_MAX, CHAR_MIN);
	// printf("4) printf : %X %X \n", UINT_MAX, 0);
	// ft_printf("ft_printf : %X %X \n\n", UINT_MAX, 0);
	// printf("5) printf : %X %X \n", LONG_MAX, LONG_MIN);
	// ft_printf("ft_printf : %X %X \n\n", LONG_MAX, LONG_MIN);
	// printf("6) printf : %X %X \n", LONG_MAX + 1, LONG_MIN - 1);
	// ft_printf("ft_printf : %X %X \n\n", LONG_MAX + 1, LONG_MIN - 1);
	// printf("percent-test\n1) printf : %% \n");
	// ft_printf("ft_printf : %% \n\n");
	// printf("2) printf : %%%%\n");
	// ft_printf("ft_printf : %%%%\n\n");
	// printf("3) printf : %% %% %%\n");
	// ft_printf("ft_printf : %% %% %%\n\n");
	// printf("4) printf : %%  %%   %%\n");
	// ft_printf("ft_printf : %%  %%   %%\n\n");
// 	return (0);
// }
