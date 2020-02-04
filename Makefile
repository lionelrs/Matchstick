##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

NAME	=	matchstick

SRC	=	src/main.c \
		src/game.c \
		src/error.c \
		src/print.c \
		src/game1.c \
		utils/str_m.c \
		utils/get_next_line.c \

OBJ     =	$(SRC:.c=.o)

CFLAGS  +=	-Wall -Wextra -g3

CFLAGS  +=	-I./include

LDFLAGS	=	-lmy -L./utils/

all:	$(NAME)
		rm -f $(OBJ)

$(NAME) :	$(OBJ)
		cd utils/&& make
		@gcc -o $(NAME) $(OBJ) $(LDFLAGS) -g3

clean	:
		cd utils/&& make clean
		rm -f $(OBJ)

fclean  :	clean
		cd utils/&& make fclean
		rm -f $(NAME)

re      :	fclean all
		cd utils/&& make re
		rm -f $(OBJ)

.SILENT	:	all fclean clean re

.PHONY	:	all fclean clean re
