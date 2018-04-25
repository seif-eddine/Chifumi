/*
** epur_str.c for  in /home/kirito/etna/chifumi
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Thu Oct 27 21:24:58 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:13:41 2016 YOUSSEF seif-eddine
*/

#include "my.h"

char		*epur_str(char *str)
{
  int		i;

  i = my_strlen(str) - 1;
  while ((str[i] == ' ' && str[i] != '\0') || (str[i] == '\t'))
    {
      str[i] = '\0';
      i--;
    }
  while (*str == ' ' && *str != '\0')
    str = str + 1;
  return (str);
}
