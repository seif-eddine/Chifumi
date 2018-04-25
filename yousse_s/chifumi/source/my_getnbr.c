/*
** my_getnbr.c for  in /home/kirito/etna/j_08/yousse_s/do-op
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Tue Oct 25 17:26:11 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:36:59 2016 YOUSSEF seif-eddine
*/

#include "my.h"

int	my_getnbr(char *str)
{
  int	ch;
  int	neg;
  int	i;

  i = 0;
  ch = 0;
  neg = 1;
  if (str == 0)
    return (0);
  else
    {
      while ((str[i] < 48 || str[i] > 57) && str[i])
  	i++;
      if ((str[i] - 1) == 45)
  	neg = -1;
      while (str[i] && str[i] >= '0' && str[i] <= '9')
      	{
      	  ch = ch * 10;
      	  ch = ch + str[i] - 48;
      	  i++;
      	}
    }
  ch = ch * neg;
  return (ch);
}
