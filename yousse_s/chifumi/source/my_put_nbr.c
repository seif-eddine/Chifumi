/*
** my_put_nbr.c for  in /home/kirito/etna/j_05
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Sat Oct 22 13:20:03 2016 YOUSSEF seif-eddine
** Last update Fri Oct 28 08:09:51 2016 YOUSSEF seif-eddine
*/

#include "my.h"

void		my_put_nbr(long int n)
{
  if (n < 0)
    {
      my_putchar('-');
      n = n * (-1);
    }
  if (n >= 9)
    {
      my_put_nbr(n / 10);
      my_putchar(n % 10 + '0');
    }
  else
    my_putchar(n % 10 + '0');
}
