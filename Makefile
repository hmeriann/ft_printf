NAME =	libftprintf.a

SRCS = 		ft_printf.c		print_bigX.c\
			print_c.c		print_di.c\
			print_smallx.c	itoa_upperx.c\
			ft_itoa_smallx_di.c\
			init_tprint.c	parcer.c\
			print_p.c		print_u.c\
			utilities.c

INCLUDE = ft_printf.h
OBJ = $(patsubst %.c,%.o,$(SRCS))

OPTFLAGS = -O2

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIB = ar rcs $(NAME)

all : $(NAME)

$(NAME) : $(OBJ)
	$(LIB)  $?

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) $(OPTFLAGS) -c $< -o $@ -I $(INCLUDE)

bonus : all

clean:
	${RM} $(OBJ) $(OBJ_B)

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY : all clean fclean re bonus
