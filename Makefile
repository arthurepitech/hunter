##
## EPITECH PROJECT, 2022
## C Pool
## File description:
## Makefile
##

NAME	=	my_hunter

SRC		+=	src/main.c					\
			src/check_flag.c 			\
			src/my_hunter.c				\
			src/init_game.c				\
			src/init_window.c			\
			src/init_background.c		\
			src/init_utils.c			\
			src/init_sprite.c			\
			src/init_sound.c			\
			src/init_score.c			\
			src/init_life.c				\
			src/init_eric_mode.c 		\
			src/init_game_over.c		\
			src/init_start.c			\
			src/display_game.c			\
			src/display_parallax.c		\
			src/display_utils.c			\
			src/display_sprite.c		\
			src/display_life.c			\
			src/display_score.c			\
			src/display_eric_mode.c		\
			src/display_game_over.c		\
			src/display_start.c			\
			src/destroy_all.c			\
			src/get_event.c 			\
			src/anime_a_sprite.c 		\
			src/get_high_score.c 		\

OBJ		+=	$(SRC:.c=.o)

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all: 	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my/
	cc -o $(NAME) $(OBJ) -I./include -lmy -L./lib $(CSFML)

%.o: %.c
	@@cc -g3 -W -Wall -Wextra -o $@ -c $<

unit_tests: fclean all
	cc tests/*.c -o unit_tests -I./include -L./ -lmy --coverage -lcriterion

run_tests: unit_tests
	./unit_tests

clean:
	@@$(shell find . -name "*.o" -delete)
	@@$(shell find . -name "*~" -delete)
	@@$(shell find . -name "\#*\#" -delete)
	@@$(shell find . -name "vgcore.*" -delete)
	@@$(shell find . -name "*.gc*" -delete)
	@@$(shell find . -name "*.log*" -delete)

fclean: clean
	@@rm -f $(NAME)
	$(MAKE) fclean -C lib/my/

re: fclean all clean
	$(MAKE) re -C lib/my/

.PHONY: all clean fclean re
