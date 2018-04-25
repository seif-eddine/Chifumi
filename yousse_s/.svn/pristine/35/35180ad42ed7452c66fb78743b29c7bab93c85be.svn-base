/*
** my_game.c for  in /home/kirito/etna/chifumi
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Oct 27 14:38:07 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:48:25 2016 YOUSSEF seif-eddine
*/

#include "my.h"

void		load_pfc(t_game *game)
{
  while (game->boool == 1)
    {
      my_putstr("Wrong entry, try again\n\n");
      my_putstr("Your turn : ");
      my_strncpy(game->y_n, epur_str(readLine()), 7);
      if (my_strcmp(epur_str(my_strlowcase(game->y_n)), "feuille") == 0)
	{
	  game->action = 3;
	  game->boool = 0;
	}
      else if (my_strcmp(my_strlowcase(game->y_n), "pierre") == 0)
	{
	  game->action = 1;
	  game->boool = 0;
	}
      else if (my_strcmp(my_strlowcase(game->y_n), "ciseaux") == 0)
	{
	  game->action = 2;
	  game->boool = 0;
	}
    }
}

void		my_reload(t_game *game)
{
  my_strncpy(game->y_n, epur_str(readLine()), 7);
  if (my_strcmp(game->y_n, "y") == 0)
    game->count = 0;
  else if (my_strcmp(game->y_n, "n") == 0)
    {
      game->count = 1;
      game->boool = 1;
    }
}

int		my_pcf(t_game *game, t_player **p)
{
  game->action = 0;
  my_strncpy(game->y_n, epur_str(readLine()), 7);
  if (my_strcmp(my_strlowcase(game->y_n), "feuille") == 0)
    {
      *p = link_add_player(*p, "Feuille ");
      game->action = 3;
    }
  else if (my_strcmp(my_strlowcase(game->y_n), "pierre") == 0)
    {
      *p = link_add_player(*p, "Pierre ");
      game->action = 1;
    }
  else if (my_strcmp(my_strlowcase(game->y_n), "ciseaux") == 0)
    {
      *p = link_add_player(*p, "Ciseaux ");
      game->action = 2;
    }
  else
    load_pfc(game);
  return (0);
}

void		my_game(t_game *game, t_ia **list, t_player **p)
{
  game->score = 0;
  game->score_ia = 0;
  game->count = 0;
  game->win = 0;
  while (game->win <= (game->tour + 1) && game->count == 0)
    {
      affiche_score(game, list, p);
      if (game->score == game->tour/2 + 1 || game->score_ia == game->tour/2 + 1)
	{
	  if (game->score < game->score_ia)
	    {
	      my_putstr("Vous avez perdu :'(\n");
	      my_putstr("\nVoulez-vous rejouer ? (y/n): ");
	      my_reload(game);
	    }
	  else if (game->score > game->score_ia)
	    {
	      my_putstr("Vous avez Gagné !\n");
	      my_putstr("\nVoulez-vous rejouer ? (y/n): ");
	      my_reload(game);
	    }
	}
      game->win++;
    }
  game->bool = 1;
}
