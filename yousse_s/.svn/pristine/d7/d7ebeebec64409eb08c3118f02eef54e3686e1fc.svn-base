/*
** game_ia.c for  in /home/kirito/etna/chifumi
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Oct 27 19:59:47 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 09:57:35 2016 YOUSSEF seif-eddine
*/

#include "my.h"

int		rand_ia()
{
  int   random;

  srand (time (NULL));
  random = (rand()% 3) + 1;
  return (random);
}

int		rand_ia_expert()
{
  int   random;

  srand (time (NULL));
  random = (rand()% 5) + 1;
  return (random);
}

int		random_ia(t_game *game, t_ia **list)
{
  if (rand_ia() == 2)
    {
      my_putstr("\nIA turn : Ciseaux\n");
      game->action2 = 2;
      *list = link_add_str(*list, "Ciseaux ");
    }
  if (rand_ia() == 1)
    {
      my_putstr("\nIA turn : Pierre\n");
      game->action2 = 1;
      *list = link_add_str(*list, "Pierre ");
    }
  if (rand_ia() == 3)
    {
      my_putstr("\nIA turn : Feuille\n");
      game->action2 = 3;
      *list = link_add_str(*list, "Feuille ");
    }
  return (0);
}
