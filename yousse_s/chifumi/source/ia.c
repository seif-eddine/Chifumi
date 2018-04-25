/*
** ia.c for  in /home/kirito/etna/chifumi
**
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
**
** Started on  Thu Oct 27 19:21:57 2016 YOUSSEF seif-eddine
** Last update Fri Oct 28 17:53:47 2016 YOUSSEF seif-eddine
*/

#include "my.h"

int		rule_player(t_game *game)
{
  if (game->action == 3 && game->action2 == 1)
    {
      my_putstr("La feuille bat la pierre !\n");
      game->score++;
      game->winner++;
    }
  else if (game->action == 2 && game->action2 == 3)
    {
      my_putstr("La ciseaux bat la feuille !\n");
      game->score++;
      game->winner++;
    }
  else if (game->action == 1 && game->action2 == 2)
    {
      my_putstr("La Pierre bat le ciseau !\n");
      game->score++;
      game->winner++;
    }
  return (0);
}

int		rule_ia(t_game *game)
{
  if (game->action2 == 3 && game->action == 1)
    {
      my_putstr("La feuille bat la pierre !\n");
      game->score_ia++;
      game->winner++;
    }
  else if (game->action2 == 2 && game->action == 3)
    {
      my_putstr("La ciseaux bat la feuille !\n");
      game->score_ia++;
      game->winner++;
    }
  else if (game->action2 == 1 && game->action == 2)
    {
      my_putstr("La Pierre bat le ciseau !\n");
      game->score_ia++;
      game->winner++;
    }
  return (0);
}

int		rule_null(t_game *game)
{
  if (game->action == 3 && game->action2 == 3)
    {
      game->win--;
      my_putstr("Match nul !\n");
    }
  else if (game->action == 2 && game->action2 == 2)
    {
      game->win--;
      my_putstr("Match nul !\n");
    }
  else if (game->action == 1 && game->action2 == 1)
    {
      game->win--;
      my_putstr("Match nul !\n");
    }
  return (0);
}

void		winner(t_game *game)
{
  if (game->score < game->score_ia)
    my_putstr("L'IA à gagné !\n");
  if (game->score > game->score_ia)
    my_putstr("Bravo ! Vous avez gagné !\n");
}

void		lauch_game(t_game *game)
{
  rule_player(game);
  rule_ia(game);
  rule_null(game);
}
