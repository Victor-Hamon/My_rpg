##
## EPITECH PROJECT, 2018
## Project Name
## File description:
## Makefile for bsq
##

CC	=	gcc -lm -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

RM	=	rm -rf

CFLAGS +=	-W -Wall -Wextra
CFLAGS +=       -I ./include/ -W -ggdb3

NAME	=	my_rpg

SRCS	=	src/main.c 			\
			src/Initialization/init_structures.c 		\
			src/Initialization/init_variables.c 		\
			src/Initialization/init_sprites.c 		\
			src/Initialization/init_window.c 		\
			src/Initialization/init_bools.c 		\
			src/Initialization/init_audio.c 		\
			src/Initialization/init_vectors.c 		\
			src/Initialization/init_quests.c 		\
			src/Initialization/init_mobs.c 		\
			src/Initialization/init_text.c 		\
			src/Initialization/init_boss.c 		\
			src/Initialization/init_anim.c 		\
			src/Initialization/init_rect.c 		\
			src/Initialization/init_view.c 		\
			src/Initialization/init_map.c 		\
			src/Menus/option_menu.c 		\
			src/Dialogues/prologue.c 		\
			src/Dialogues/scenario.c 		\
			src/Quests/quest_manager.c 		\
			src/Quests/quest_display.c 		\
			src/Quests/ending.c 		\
			src/Mobs/manage_mobs.c 		\
			src/Boss/create_boss.c 		\
			src/Menus/start_menu.c 		\
			src/Player/character.c 		\
			src/Player/manage_hp.c 		\
			src/Lib/my_getnbr.c 		\
			src/Actions/attack.c 		\
			src/Actions/move.c 		\
			src/Lib/lib_func.c 		\
			src/Map/map.c 		\
			src/Game/games.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:

	$(RM) $(OBJS)

fclean: clean

	$(RM) $(NAME)

re: all clean

.PHONY: all clean fclean re
