#include <stdio.h>
#include <limits.h>

#include "ft_printf.h"

int	main(void)
{
	int d = 6;

	printf("(%d)\n", printf("%4.-6d", d));
	printf("(%d)\n\n", ft_printf("%4.-6d", d));
	// printf("(%d)\n", printf(" %p %p ", LONG_MIN, LONG_MAX));
	// printf("(%d)\n\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	// printf("=3.0d(%d)\n", printf("%3.0d", d));
	// printf("(%d)\n\n", ft_printf("%3.0d", d));
	// printf("=-.3d(%d)\n", printf("%-.3d", d));
	// printf("(%d)\n\n", ft_printf("%-.3d", d));	// while (1)
	// printf("=-0.3d(%d)\n", printf("%-0.3d", d));
	// printf("(%d)\n\n", ft_printf("%-0.3d", d));
	// printf("=-02.3d(%d)\n", printf("%-02.3d", d));
	// printf("(%d)\n\n", ft_printf("%-02.3d", d));
	// printf("=-04.3d(%d)\n", printf("%-04.3d", d));
	// printf("(%d)\n\n", ft_printf("%-04.3d", d));
	// printf("=.-3d(%d)\n", printf("%4.-3d", d));
	// printf("(%d)\n\n", ft_printf("%4.-3d", d));
	// while (1)
	// 	;
	return (0);
}
