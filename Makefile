NAME =	libftprintf.a

SRCS = 		ft_printf.c

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
