##
## EPITECH PROJECT, 2022
## Makefiles
## File description:
## MakeFiles
##
SRC	=	$(wildcard lib/my/*/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

NAMI	=	my_hunter

FLAG	=	-lmy -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

all: $(NAME) clean

$(NAME): $(OBJ)
	mkdir -p includes
	cp lib/my/my.h includes/
	cp lib/my/hunter/game.h includes/
	gcc $(SRC) -c -g2 -W -Wall -Wextra
	ar rc $(NAME) *.o
	gcc -o $(NAMI) hunter.c -I includes/ -L. $(FLAG) -g2 -W -Wall -Wextra

clean:
	rm -f $(OBJ)
	rm -f $(wildcard lib/my/my_put/.# lib/my/my_put/*~)
	rm -f $(wildcard lib/my/modif_str/.# lib/my/modif_str/*~)
	rm -f $(wildcard lib/my/find_str/.# lib/my/find_str/*~)
	rm -f $(wildcard lib/my/.# lib/my/*~)
	rm -f $(wildcard .# *~)
	rm -f $(wildcard vgcore.*)
	rm -f *.o

fclean :	clean
	rm -f $(NAME)
	rm -f $(NAMI)
	rm -rf includes

re:	fclean all
