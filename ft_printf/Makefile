NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror

SRC = ft_printf.c \
	%%_conversion.c \
   	%c_conversion.c \
    %d_conversion.c \
    %i_conversion.c \
    %p_conversion.c \
    %s_conversion.c \
    %u_conversion.c \
    %x_conversion.c \
    %X_conversion.c \
    ft_numlen.c \
    ft_putchar.c \
    ft_putnbr.c \
	ft_putnbr_unsigned.c \
	ft_putstr.c \
	ft_putptr.c \
	ft_puthex_lowercase.c \
	ft_puthex_uppercase.c \


OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^

%.o : %.c
	$(CC) -c $^

clean :
	rm -f $(OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re