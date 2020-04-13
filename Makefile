##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	my_ls.c	\
		flags_ls.c	\
		flags2_ls.c	\
		file.c

NAME	=	my_ls

all:	$(NAME)

$(NAME):
	make re -C lib/my
	gcc -o $(NAME) $(SRC) -Iinclude -Llib -lmy

clean:
	make clean -C lib/my
	rm -f $(NAME) 

fclean:	clean
	make fclean -C lib/my

re:	fclean all

.PHONY:
	all clean fclean re
