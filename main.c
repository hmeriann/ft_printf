#include <stdio.h>
#include <limits.h>

#include "ft_printf.h"

int	main(void)
{
	int d = 6;
	int	n = 16;
	int	m = 1116;

	printf("(%d)\n", printf("0*%0-*.*d*0 0*%0*.*d*0", 6, 2, 102, 10, 21, -101));//1
	printf("(%d)\n\n", ft_printf("0*%0-*.*d*0 0*%0*.*d*0", 6, 2, 102, 10, 21, -101));
	// printf("(%d)\n", printf("%2d", d));//2
	// printf("(%d)\n\n", ft_printf("%2d", d));
	// printf("(%d)\n", printf("%2.d", d));//3
	// printf("(%d)\n\n", ft_printf("%2d", d));
	// printf("(%d)\n", printf("%2.3d", d));//4
	// printf("(%d)\n\n", ft_printf("%2.3d", d));
	// printf("(%d)\n", printf("%2.-3d", d));//5
	// printf("(%d)\n\n", ft_printf("%2.-3d", d));
	// printf("(%d)\n", printf("%3.5d", d));//6
	// printf("(%d)\n\n", ft_printf("%3.5d", d));
	// printf("(%d)\n", printf("%5.3d", d));//7
	// printf("(%d)\n\n", ft_printf("%5.3d", d));
	// printf("(%d)\n", printf("%1.3d", n));//8
	// printf("(%d)\n\n", ft_printf("%1.3d", n));
	// printf("(%d)\n", printf("%3.2d", m));//9
	// printf("(%d)\n\n", ft_printf("%3.2d", m));
	// printf("(%d)\n", printf("%3.5d", m));//10
	// printf("(%d)\n\n", ft_printf("%3.5d", m));
	// printf("(%d)\n", printf("%3.1d", n));//11
	// printf("(%d)\n\n", ft_printf("%3.1d", n));
	// printf("(%d)\n", printf("%3.2d", m));//12
	// printf("(%d)\n\n", ft_printf("%3.2d", m));
	// while (1)
	// 	;
	return (0);
}
