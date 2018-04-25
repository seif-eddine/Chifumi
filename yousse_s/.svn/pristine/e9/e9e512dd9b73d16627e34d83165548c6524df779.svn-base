/*
** lin_add_int.c for  in /home/kirito/etna/j_09/link
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Wed Oct 26 22:30:55 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:10:39 2016 YOUSSEF seif-eddine
*/

#include <stdlib.h>
#include "my.h"

t_ia          *link_add_str(t_ia *list, char *strstr)
{
  t_ia        *elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (NULL);
  elem->next = list;
  elem->str = strstr;
  free(elem);
  return (elem);
}

t_player          *link_add_player(t_player *p, char *strstr)
{
  t_player        *elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (NULL);
  elem->next = p;
  elem->str = strstr;
  free(elem);
  return (elem);
}
