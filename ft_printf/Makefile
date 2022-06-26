NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror

SRC = ft_printf.c \
    ft_numlen.c \
	ft_hexlen.c \
    ft_putchar.c \
    ft_putnbr.c \
	ft_putnbr_unsigned.c \
	ft_putstr.c \
	ft_putptr.c \
	ft_puthex_lowercase.c \
	ft_puthex_uppercase.c \
	ft_strlen.c \


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