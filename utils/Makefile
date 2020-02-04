##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SRC	=	my_putchar.c \
		my_putstr.c \
		my_putnbr_bin.c \
		my_putnbr_oct.c \
		my_putnbr_upper_hex.c \
		my_putnbr_lower_hex.c \
		s_flag.c \
		my_putnbr.c \
		my_put_uns_int.c \
		print_adress.c \
		my_strlen.c \
		my_printf.c \
		my_putfloat.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I ../include/

all:	$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all clean

.SILENT	:	all fclean clean re

.PHONY	:	all fclean clean re
