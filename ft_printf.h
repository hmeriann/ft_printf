#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		width;
	int		precision;
	int		zero_padding;
	int		dot;
	int		dash;
	int		total_length;
	int		sign;
	int		is_zero;
	int		percent;
	int		space_flag;
}			t_print;

int	ft_printf(const char	*str, ...);

#endif
