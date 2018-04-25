/*
** expert.c for  in /home/kirito/etna/chifumi
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Oct 28 17:25:01 2016 YOUSSEF seif-eddine
** Last update Fri Oct 28 21:50:37 2016 YOUSSEF seif-eddine
*/

#include "../source/my.h"

int             my_pcf_expert(t_game *game, t_player **p)
{
  game->action = 0;
  my_strncpy(game->y_n, readLine(), 7);
  if (my_strcmp(game->y_n, "feuille") == 0)
    my_action(3, "feuille ", p, game);
  else if (my_strcmp(game->y_n, "pierre") == 0)
    my_action(1, "pierre ", p, game);
  else if (my_strcmp(game->y_n, "spoke") == 0)
    my_action(3, "ciseaux ", p, game);
  /* else if (my_strcmp(game->y_n, "lezard") == 0) */
    
  else if (my_strcmp(game->y_n, "ciseaux") == 0)
    {
      *p = link_add_player(*p, "Ciseaux ");
      game->action = 2;
    }
  else
    load_pfc_expert(game);
  return (0);
}

void            load_pfc_expert(t_game *game)
{
  while (game->boool == 1)
    {
      my_putstr("Wrong entry, try again\n\n");
      my_putstr("Your turn : ");
      my_strncpy(game->y_n, readLine(), 7);
      if (my_strcmp(game->y_n, "feuille") == 0)
	{
	  game->action = 3;
	  game->boool = 0;
	}
      else if (my_strcmp(game->y_n, "pierre") == 0)
	{
	  game->action = 1;
	  game->boool = 0;
	}
      else if (my_strcmp(game->y_n, "spoke") == 0)
	{
	  game->action = 1;
	  game->boool = 0;
	}
      else if (my_strcmp(game->y_n, "lezard") == 0)
	{
	  game->action = 1;
	  game->boool = 0;
	}
      else if (my_strcmp(game->y_n, "ciseaux") == 0)
	{
	  game->action = 2;
	  game->boool = 0;
	}
    }
}

int             rule_player_expert(t_game *game)
{
  if ((game->action == 1 && game->action2 == 3) || (game->action == 1 && game->action2 == 5))
    {
      my_putstr("La pierre gagne !\n");
      game->score++;
      game->winner++;
    }
  else if ((game->action == 2 && game->action2 == 1) || (game->action == 2 && game->action2 == 4))
    {
      my_putstr("La feuille gagne !\n");
      game->score++;
      game->winner++;
    }
  else if ((game->action == 3 && game->action2 == 2) || (game->action == 3 && game->action2 == 5))
    {
      my_putstr("Le ciseaux gagne !\n");
      game->score++;
      game->winner++;
    }
  else if ((game->action == 4 && game->action2 == 1) || (game->action == 4 && game->action2 == 3))
    {
      my_putstr("Monsieur SPoke gagne  !\n");
      game->score++;
      game->winner++;
    }
  else if ((game->action == 5 && game->action2 == 4) || (game->action == 5 && game->action2 == 2))
    {
      my_putstr("Le lezard gagne !\n");
      game->score++;
      game->winner++;
    }
  return (0);
}


int             rule_ia_expert(t_game *game)
{
    if ((game->action2 == 1 && game->action == 3) || (game->action2 == 1 && game->action == 5))
    {
      my_putstr("La pierre gagne !\n");
      game->score_ia++;
      game->winner++;
    }
  else if ((game->action2 == 2 && game->action == 1) || (game->action2 == 2 && game->action == 4))
    {
      my_putstr("La feuille gagne !\n");
      game->score_ia++;
      game->winner++;
    }
  else if ((game->action2 == 3 && game->action == 2) || (game->action2 == 3 && game->action == 5))
    {
      my_putstr("Le ciseaux gagne !\n");
      game->score_ia++;
      game->winner++;
    }
  else if ((game->action2 == 4 && game->action == 1) || (game->action2 == 4 && game->action == 3))
    {
      my_putstr("Monsieur SPoke gagne  !\n");
      game->score_ia++;
      game->winner++;
    }
  else if ((game->action2 == 5 && game->action == 4) || (game->action2 == 5 && game->action == 2))
    {
      my_putstr("Le lezard gagne !\n");
      game->score_ia++;
      game->winner++;
    }
  return (0);
}

int             rule_null_expert(t_game *game)
{
  if (game->action == 4 && game->action2 == 4)
    {
      game->win--;
      my_putstr("Match nul !\n");
    }
  else if (game->action == 5 && game->action2 == 5)
    {
      game->win--;
      my_putstr("Match nul !\n");
    }
  return (0);
}

void            lauch_game_expert(t_game *game)
{
  rule_player_expert(game);
  rule_ia_expert(game);
  rule_null_expert(game);
}
