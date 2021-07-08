#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		dash;
	int		total_length;
}			t_print;

void	ft_putchar(char c, t_print *tab);
int		ft_isdigit(int c);
int		ft_strlen(char *str);
void	ft_putstr(char *str, int len, t_print *tab);
void	ft_print_str(char *str, t_print *tab);
void	ft_print_p(unsigned long number, t_print *tab);
void	find_num_idx(int len, unsigned long number, int base, char *str);
char	*ft_itoa(unsigned long number, int base);
char	*ft_itoa_X(unsigned long number, int base);
void	ft_print_x(unsigned long number, t_print *tab);
void	ft_print_X(unsigned long number, t_print *tab);
void	ft_print_d(long number, t_print *tab);
void	ft_print_u(unsigned int number, t_print *tab);
void	ft_print_c(int c, t_print *tab);
int		ft_printf(const char	*str, ...);

#endif
