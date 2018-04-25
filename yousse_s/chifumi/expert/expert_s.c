/*
** expert_s.c for  in /home/kirito/etna/chifumi
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Oct 28 18:22:02 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 09:57:15 2016 YOUSSEF seif-eddine
*/


#include "../source/my.h"

void		my_action(int action, char *str, t_player **p, t_game *game)
{
  game->action = action;
  *p = link_add_player(*p, str);
}

int             random_ia_expert(t_game *game, t_ia **list)
{
  if (rand_ia_expert() == 2)
    {
      my_putstr("\nIA turn : Ciseaux\n");
      game->action2 = 2;
      *list = link_add_str(*list, "Ciseaux ");
    }
  if (rand_ia_expert() == 1)
    {
      my_putstr("\nIA turn : Pierre\n");
      game->action2 = 1;
      *list = link_add_str(*list, "Pierre ");
    }
  if (rand_ia_expert() == 3)
    {
      my_putstr("\nIA turn : Feuille\n");
      game->action2 = 3;
      *list = link_add_str(*list, "Feuille ");
    }
  if (rand_ia_expert() == 4)
    {
      my_putstr("\nIA turn : Spoke\n");
      game->action2 = 3;
      *list = link_add_str(*list, "Spoke ");
    }
  if (rand_ia_expert() == 5)
    {
      my_putstr("\nIA turn : Lezard\n");
      game->action2 = 3;
      *list = link_add_str(*list, "Lezard");
    }
  return (0);
}
