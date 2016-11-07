##
## Makefile for printf in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
## 
## Made by cebria_a
## Login   <alexandro.cebrianmancera@epitech.eu>
## 
## Started on  Mon Nov  7 18:45:48 2016 cebria_a
## Last update Mon Nov  7 20:06:22 2016 cebria_a
##

CC	=	gcc

RM	=	rm -f

IDIR	=	include/

CFLAGS	=	-Wall -Wextra -Werror -I$(IDIR)

SRC	=	sum_stdarg.c	\
		disp_stdarg.c	\
		my_putstr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_strlen.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re