/*
** check_arg.c for  in /home/kirito/etna/chifumi
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Oct 28 09:18:24 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:42:05 2016 YOUSSEF seif-eddine
*/

#include "my.h"

int             my_choose_option(t_game *game, t_ia **list, t_player **p)
{
  game->bool = 0;
  if (game->boool == 0)
    {
      if (my_getnbr(game->y_n) == 1 && game->bool == 0)
	{
	  my_putstr("Let's go for a Player VS IA !\n");
	  my_game(game, list, p);
	}
      else
	{
	  my_putstr("Wrong choice, try again : ");
	  while (my_getnbr(game->y_n) == 1 && game->bool == 0)
	    {
	      my_putstr("Let's go for a Player VS IA !\n");
	      my_game(game, list, p);
	    }
	}
    }
  return (0);
}

void	affiche_score(t_game *game, t_ia **list, t_player **p)
{
  my_putstr("\nYour turn.  Pierre / feuille / ciseaux  ou quitter ? (y) : ");
  my_pcf(game, p);
  rand_ia();
  random_ia(game, list);
  lauch_game(game);
  my_putstr("\033[32m\033[1m\033[4m\033[5m\033[7m");
  my_putstr("Score player : ");
  my_put_nbr(game->score);
  my_putstr("\n");
  my_putstr("Score IA : ");
  my_put_nbr(game->score_ia);
  my_putstr("\n");
  my_putstr("\033[0m\n");
}

int     check_arg(t_game *game, char **argv)
{
  game->arg1 = 0;
  game->arg3 = 0;
  game->classique = 0;
  game->expert = 0;
  game->arg1 = my_strcmp(argv[1], "--version");
  game->classique = my_strcmp(argv[2], "classique");
  game->expert = my_strcmp(argv[2], "expert");
  game->arg3 = my_strcmp(argv[3], "--duree");
  if (game->arg1 != 0)
    game->bol = 0;
  if (game->arg3 != 0)
    game->bol = 0;
  if (my_getnbr(argv[2]) == game->classique && game->classique != 0)
    game->bol = 0;
  else if (my_getnbr(argv[2]) == game->expert && game->expert != 0)
    game->bol = 0;
  return (0);
}

int	c_e(t_game *game, char **argv)
{
  clr();
  if (game->classique == 0 && my_getnbr(argv[2]) == game->classique)
    my_aff_ascii_art_classique();
  else if (game->expert == 0 && my_getnbr(argv[2]) == game->expert)
    my_aff_ascii_art_expert();
  my_menu();
  return (0);
}

void	my_histo(t_player **p, t_ia **list)
{
  my_putstr("Historique de l'ia : ");
  my_aff_list_str(*list);
  my_putstr("Historique du joueur : ");
  my_aff_list_player(*p);
  my_putchar('\n');
}
