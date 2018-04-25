/*
** my_strcmp.c for  in /home/kirito/etna/j_04/yousse_s/my_strcmp
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Oct 21 14:57:39 2016 YOUSSEF seif-eddine
** Last update Fri Oct 28 09:51:56 2016 YOUSSEF seif-eddine
*/

#include "my.h"

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] > s2[i])
	return (s1[i] - s2[i]);
      if (s1[i] < s2[i])
	return (s1[i] - s2[i]);
      i = i + 1;
    }
  if (s2[i])
    return (-1);
  return (0);
}
