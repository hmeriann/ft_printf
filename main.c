#include <stdio.h>
#include <limits.h>

#include "ft_printf.h"

int	main(void)
{
	int d = 6;
	int	n = 16;
	int	m = 1116;

	printf("(%d)\n", printf("%-d", d));
	printf("(%d)\n\n", ft_printf("%-d", d));
	printf("(%d)\n", printf("%-2d", d));
	printf("(%d)\n\n", ft_printf("%-2d", d));
	printf("(%d)\n", printf("%-2.d", d));
	printf("(%d)\n\n", ft_printf("%-02d", d));
	printf("(%d)\n", printf("%-2.d", d));
	printf("(%d)\n\n", ft_printf("%-02.d", d));
	printf("(%d)\n", printf("%-2.3d", d));
	printf("(%d)\n\n", ft_printf("%-2.3d", d));
	printf("(%d)\n", printf("%-2.-3d", d));
	printf("(%d)\n\n", ft_printf("%-2.-3d", d));
	printf("(%d)\n", printf("%-03.5d", d));
	printf("(%d)\n\n", ft_printf("%-03.5d", d));
	printf("(%d)\n", printf("%-05.3d", d));
	printf("(%d)\n\n", ft_printf("%-05.3d", d));
	printf("(%d)\n", printf("%-01.3d", n));
	printf("(%d)\n\n", ft_printf("%-01.3d", n));
	printf("(%d)\n", printf("%-03.2d", m));
	printf("(%d)\n\n", ft_printf("%-03.2d", m));
	// while (1)
	// 	;
	return (0);
}
