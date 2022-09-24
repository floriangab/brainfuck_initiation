##
## PROJECT, 2020
## makefile
## File description:
## use to compile
##

FILE	=	main.c	\

## DIRECTORY PATH
SRC = ./src/

SRC_C	=	$(SRC)error.c	\
			$(SRC)generate.c	\
			$(SRC)help.c	\
			$(SRC)free.c	\

CC	=	gcc

MAIN	=	$(FILE:.c=.o)

OBJ	=	$(SRC_C:.c=.o)

NAME	=	brainfuck_interpretor

INC	=	-I./include

CFLAGS	=	-W -Wall -Wextra -Werror -g3 $(INC)

all:	$(NAME)

$(NAME):	$(OBJ) $(MAIN)
	$(CC) $(OBJ) $(MAIN) -o $(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(MAIN)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY	:	all clean re fclean

.SILENT	:	clean fclean
