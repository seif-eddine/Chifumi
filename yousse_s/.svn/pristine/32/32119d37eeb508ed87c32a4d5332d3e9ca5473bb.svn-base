##
## Makefile for  in /home/kirito/etna/chifumi
##
## Made by YOUSSEF seif-eddine
## Login   <yousse_s@etna-alternance.net>
##
## Started on  Thu Oct 27 16:54:39 2016 YOUSSEF seif-eddine
## Last update Sat Oct 29 10:19:42 2016 YOUSSEF seif-eddine
##

RM      =       rm -f

CC      =       gcc -g3

NAME    =       chifumi

SRC     =       source/my_getnbr.c \
		source/my_strcmp.c \
		source/readline.c \
		source/main.c \
		source/my_game.c \
		source/ia.c \
		source/game_ia.c \
		source/epur_str.c \
		source/my_put_nbr.c \
		source/check_arg.c \
		source/my_strncpy.c \
		source/my_aff_list_str.c \
		source/link_add_str.c \
		expert/expert.c \
		expert/expert_s.c \
		source/my_strlowcase.c \

OBJ     =       $(SRC:.c=.o)

CFLAGS  =       -W -Wall -Wextra -Werror -pedantic -ansi -W

RM      =       rm -fr

all     :       $(NAME)

$(NAME) :       $(OBJ)
		$(CC) -o $(NAME) $(OBJ)
clean   :
		$(RM) $(OBJ) *~

fclean  :       clean
		$(RM) $(NAME)

re      :	fclean all

.PHONY  : all clean fclean re
