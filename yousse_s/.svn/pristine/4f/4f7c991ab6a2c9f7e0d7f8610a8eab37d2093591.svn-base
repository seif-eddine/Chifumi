/*
** my.h for  in /home/kirito/etna/chifumi
**
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
**
** Started on  Thu Oct 27 11:52:09 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:48:31 2016 YOUSSEF seif-eddine
*/

#ifndef			MY_H_
# define		MY_H_

# include		<stdio.h>
# include		<stdlib.h>
# include		<unistd.h>
# include		<sys/types.h>
# include		<sys/uio.h>
# include		<string.h>
# include		<time.h>

# define		clr() my_putstr("\033[H\033[2J")

typedef struct		s_game
{
  int			bol;
  int			boool;
  int			score;
  int			score_ia;
  int			tour;
  char			y_n[50];
  int			action;
  int			action2;
  int			i;
  int			classique;
  int			expert;
  int			duree;
  int			arg1;
  int			arg3;
  int			bool;
  int			winner;
  int			win;
  int			count;
  int			bol1;
}			t_game;

typedef struct		s_choice
{
  int			pierre;
  int			ciseaux;
  int			feuille;
}			t_choice;

typedef struct		s_player
{
  char			*str;
  struct s_player	*next;
}			t_player;

typedef struct		s_ia
{
  char			*str;
  struct s_ia		*next;
}			t_ia;

void			my_action(int action, char *str, t_player **p, t_game *game);
void			my_putstr(char *str);
void			my_menu();
void			my_aff_ascii_art();
void			load_pfc(t_game *game);
void			quit(t_game *game);
void			winner(t_game *game);
void			lauch_game(t_game *game);
void			lauch_game_expert(t_game *game);
void			my_put_nbr(long int n);
void			affiche_score(t_game *game, t_ia **list, t_player **p);
void			my_aff_ascii_art_classique();
void			my_aff_ascii_art_expert();
void			my_histo(t_player **p, t_ia **list);
void			load_pfc_expert(t_game *game);
void			my_pcf_expert_s(t_game *game, t_player **p);
void			my_game(t_game *game, t_ia **list, t_player **p);

int			rand_ia_expert();
int			my_pcf(t_game *game, t_player **p);
int			my_putchar(char c);
int			my_getnbr(char *str);
int			my_strcmp(char *s1, char *s2);
int			my_print_game(t_game *game, t_ia **list, t_player **p);
int			my_choose_option(t_game *game, t_ia **list, t_player **p);
int			rule_player(t_game *game);
int			rule_ia(t_game *game);
int			rule_null(t_game *game);
int			rand_ia();
int			random_ia(t_game *game, t_ia **list);
int			check_arg(t_game *game, char **argv);
int			c_e(t_game *game, char **argv);
int			rand_ia();
int			rand_ia_expert();
int			random_ia_expert(t_game *game, t_ia **list);
int			my_pcf_expert(t_game *game, t_player **p);
int			rule_player_expert(t_game *game);
int			rule_ia_expert(t_game *game);
int			my_strlen(char *str);

char			*my_strlowcase(char str[]);
char			*my_strncpy(char *dest, char *src, int n);
char			*my_strcpy(char *dest, char *src);
char			*epur_str(char *str);
char			*readLine();

t_ia			*my_aff_list_str(t_ia *list);
t_ia			*link_add_str(t_ia *list, char *strstr);

t_player		*link_add_player(t_player *list, char *strstr);
t_player		*my_aff_list_player(t_player *p);

# endif /*! MY_H_ !*/
