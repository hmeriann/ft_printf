#include <stdio.h>
#include <limits.h>

#include "ft_printf.h"

int	main(void)
{
	// int d = 10;
// int a;
// 	int b;

	// a = ft_printf("Hello, %s\n", "World!");
	// b = printf("Hello, %s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15s\n", "World!");
	// b = printf("Hello, %15s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.5s\n", "World!");
	// b = printf("Hello, %15.5s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.10s\n", "World!");
	// b = printf("Hello, %5.10s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.10s\n", "World!");
	// b = printf("Hello, %.10s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.3s\n", "World!");
	// b = printf("Hello, %.3s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.s\n", "World!");
	// b = printf("Hello, %.s\n", "World!");
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %s\n", NULL);
	// b = printf("Hello, %s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15s\n", NULL);
	// b = printf("Hello, %15s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.10s\n", NULL);
	// b = printf("Hello, %15.10s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.10s\n", NULL);
	// b = printf("Hello, %5.10s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.10s\n", NULL);
	// b = printf("Hello, %.10s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.s\n", NULL);
	// b = printf("Hello, %.s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.2s\n", NULL);
	// b = printf("Hello, %.2s\n", NULL);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %d\n", 0);
	// b = printf("Hello, %d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15d\n", 0);
	// b = printf("Hello, %15d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.5d\n", 0);
	// b = printf("Hello, %15.5d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.10d\n", 0);
	// b = printf("Hello, %5.10d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n\n\n\n", b);

	// a = ft_printf("Hello, %015.1d\n", 0);
	// b = printf("Hello, %015.1d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %0.10d\n", 0);
	// b = printf("Hello, %0.10d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.1d\n", 0);
	// b = printf("Hello, %.1d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.d\n", 0);
	// b = printf("Hello, %.d\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %d\n", INT_MAX);
	// b = printf("Hello, %d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15d\n", INT_MAX);
	// b = printf("Hello, %15d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.10d\n", INT_MAX);
	// b = printf("Hello, %15.10d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.15d\n", INT_MAX);
	// b = printf("Hello, %5.15d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.d\n", INT_MAX);
	// b = printf("Hello, %5.d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.2d\n", INT_MAX);
	// b = printf("Hello, %5.2d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.20d\n", INT_MAX);
	// b = printf("Hello, %.20d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.2d\n", INT_MAX);
	// b = printf("Hello, %.2d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.d\n", INT_MAX);
	// b = printf("Hello, %d\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %d\n", INT_MIN);
	// b = printf("Hello, %d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15d\n", INT_MIN);
	// b = printf("Hello, %15d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.10d\n", INT_MIN);
	// b = printf("Hello, %15.10d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.15d\n", INT_MIN);
	// b = printf("Hello, %5.15d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.d\n", INT_MIN);
	// b = printf("Hello, %5.d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.2d\n", INT_MIN);
	// b = printf("Hello, %5.2d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.20d\n", INT_MIN);
	// b = printf("Hello, %.20d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.2d\n", INT_MIN);
	// b = printf("Hello, %.2d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.d\n", INT_MIN);
	// b = printf("Hello, %.d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %d\n", INT_MIN);
	// b = printf("Hello, %d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %d\n", INT_MIN);
	// b = printf("Hello, %d\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15d\n", INT_MAX + 1);
	// b = printf("Hello, %15d\n", INT_MAX + 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.5d\n", INT_MIN - 1);
	// b = printf("Hello, %.5d\n", INT_MIN - 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %10d\n", INT_MIN - 1);
	// b = printf("Hello, %10d\n", INT_MIN - 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.5d\n", INT_MIN - 1);
	// b = printf("Hello, %15.5d\n", INT_MIN - 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %x\n", 0);
	// b = printf("Hello, %x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15x\n", 0);
	// b = printf("Hello, %15x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.5x\n", 0);
	// b = printf("Hello, %15.5x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.10x\n", 0);
	// b = printf("Hello, %5.10x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.1x\n", 0);
	// b = printf("Hello, %5.1x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.10x\n", 0);
	// b = printf("Hello, %.10x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.1x\n", 0);
	// b = printf("Hello, %.1x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.x\n", 0);
	// b = printf("Hello, %.x\n", 0);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %x\n", INT_MAX);
	// b = printf("Hello, %x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15x\n", INT_MAX);
	// b = printf("Hello, %15x\n", INT_MAX);
	// printf("a = %x\n", a);
	// printf("b = %x\n", a);

	// a = ft_printf("Hello, %15.10x\n", INT_MAX);
	// b = printf("Hello, %15.10x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.15x\n", INT_MAX);
	// b = printf("Hello, %5.15x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.x\n", INT_MAX);
	// b = printf("Hello, %5.x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.2x\n", INT_MAX);
	// b = printf("Hello, %5.2x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.20x\n", INT_MAX);
	// b = printf("Hello, %.20x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.2x\n", INT_MAX);
	// b = printf("Hello, %.2x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.x\n", INT_MAX);
	// b = printf("Hello, %x\n", INT_MAX);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %x\n", INT_MIN);
	// b = printf("Hello, %x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15x\n", INT_MIN);
	// b = printf("Hello, %15x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.10x\n", INT_MIN);
	// b = printf("Hello, %15.10x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.15x\n", INT_MIN);
	// b = printf("Hello, %5.15x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.x\n", INT_MIN);
	// b = printf("Hello, %5.x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %5.2x\n", INT_MIN);
	// b = printf("Hello, %5.2x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.20x\n", INT_MIN);
	// b = printf("Hello, %.20x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.2x\n", INT_MIN);
	// b = printf("Hello, %.2x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.x\n", INT_MIN);
	// b = printf("Hello, %.x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %x\n", INT_MIN);
	// b = printf("Hello, %x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %x\n", INT_MIN);
	// b = printf("Hello, %x\n", INT_MIN);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15x\n", INT_MAX + 1);
	// b = printf("Hello, %15x\n", INT_MAX + 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %.5x\n", INT_MIN - 1);
	// b = printf("Hello, %.5x\n", INT_MIN - 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %10x\n", INT_MIN - 1);
	// b = printf("Hello, %10x\n", INT_MIN - 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	// a = ft_printf("Hello, %15.5x\n", INT_MIN - 1);
	// b = printf("Hello, %15.5x\n", INT_MIN - 1);
	// printf("a = %d\n", a);
	// printf("b = %d\n", b);

	printf("    printf: (%d)\n", printf(" %*p %-*p ", -10, 101, -10, 42));
	printf(" ft_printf: (%d)\n", ft_printf(" %*p %-*p ", -10, 101, -10, 42));
	// while (1)
	// ;
	return (0);
}
