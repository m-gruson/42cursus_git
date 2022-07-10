NAME = libftprintf.a

CC = gcc

SRC = ft_printf.c \
    ft_nbrlen.c \
	ft_hexlen.c \
	ft_unslen.c \
    ft_putchar.c \
    ft_putnbr.c \
	ft_putuns.c \
	ft_putstr.c \
	ft_putptr.c \
	ft_puthex_lowercase.c \
	ft_puthex_uppercase.c \
	ft_strlen.c \
	ft_s_c_d_p_conversion.c \
	ft_x_xupper_u_conversion.c \

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