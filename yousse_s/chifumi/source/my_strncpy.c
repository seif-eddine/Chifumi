/*
** my_strncpy.c for  in /home/kirito/etna/j_04/yousse_s
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Fri Oct 21 14:25:02 2016 YOUSSEF seif-eddine
** Last update Fri Oct 28 10:47:51 2016 YOUSSEF seif-eddine
*/

char  *my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i <= n)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
