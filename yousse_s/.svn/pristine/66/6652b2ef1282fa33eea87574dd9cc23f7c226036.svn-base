/*
** my_aff_list_int.c for  in /home/kirito/etna/j_09/link
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Wed Oct 26 22:53:30 2016 YOUSSEF seif-eddine
** Last update Fri Oct 28 16:07:26 2016 YOUSSEF seif-eddine
*/

#include <unistd.h>
#include "my.h"
#include <stdlib.h>

int			my_strlen(char *str)
{
  int			i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str != NULL && str[i])
    i++;
  return (i);
}

t_ia                  *my_aff_list_str(t_ia *list)
{
  t_ia		*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->str);
      tmp = tmp->next;
    }
  my_putstr("\n");
  return (tmp);
}

t_player                  *my_aff_list_player(t_player *p)
{
  t_player		*tmp;

  tmp = p;
  while (tmp != NULL)
    {
      my_putstr(tmp->str);
      tmp = tmp->next;
    }
  my_putstr("\n");
  return (tmp);
}
