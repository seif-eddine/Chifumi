/*
** readline.c for  in /home/kirito/etna/roulette/yousse_s/roulette
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Sat Oct 22 09:04:02 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:04:13 2016 YOUSSEF seif-eddine
*/

#include "my.h"

int		my_putchar(char c)
{
  if (write (1, &c, 1) == -1)
    return (-1);
  return (0);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}

char		*my_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest = '\0';
  return (dest);
}

char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
