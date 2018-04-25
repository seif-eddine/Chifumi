/*
** my_roulette.c for  in /home/kirito/etna/roulette/yousse_s/roulette
** 
** Made by YOUSSEF seif-eddine
** Login   <yousse_s@etna-alternance.net>
** 
** Started on  Sat Oct 22 09:13:31 2016 YOUSSEF seif-eddine
** Last update Sat Oct 29 10:20:15 2016 YOUSSEF seif-eddine
*/

#include "my.h"

void            my_menu()
{
  my_putstr("\033[32m\033[1m\033[4m\033[5m\033[7m");
  my_putstr("\n\t\tPlayer VS IA (1)\n");
  my_putstr("\t\tPlayer VS Player (2)\n");
  my_putstr("\t\tIA VS IA (3)\n");
  my_putstr("\t\tHow to play (4)\n");
  my_putstr("\n\nChoose Your option :");
  my_putstr("\033[0m\n");
}

int		my_print_game(t_game *game, t_ia **list, t_player **p)
{
  game->i = 0;
  game->boool = 0;
  while (1 && game->boool == 0)
    {
      my_strcpy(game->y_n, readLine());
      my_choose_option(game, list, p);
    }
  my_putstr("See you next time ! :) \n");
  return (0);
}

void            my_aff_ascii_art_classique()
{
  my_putstr("\033[32m\033[1m\033[4m\033[5m\033[7m");
  my_putstr("-------------------------------------------------------\n");
  my_putstr("| --------------------------------------------------- |\n");
  my_putstr("|                     ChifuMi                         |\n");
  my_putstr("| --------------------------------------------------- |\n");
  my_putstr("---------------------Classique------------------------\033[0m\n");
}

void            my_aff_ascii_art_expert()
{
  my_putstr("\033[31m\033[1m\033[4m\033[5m\033[7m");
  my_putstr("-------------------------------------------------------\n");
  my_putstr("| --------------------------------------------------- |\n");
  my_putstr("|                     ChifuMi                         |\n");
  my_putstr("| --------------------------------------------------- |\n");
  my_putstr("-----------------------Expert-------------------------\033[0m\n");
}

int	main(int argc, char **argv)
{
  t_game	*game;
  t_ia		*list;
  t_player	*list1;

  list = NULL;
  list1 = NULL;
  if ((game = malloc(sizeof(t_game))) == NULL)
    return (0);
  game->bol = 1;
  if (argc < 5)
    my_putstr("./chifumi [VERSION] [CLASSIQUE/EXPERT] [DUREE] [INT]\n");
  else
    check_arg(game, argv);
  if (argc == 5 && game->bol == 1)
    {
      c_e(game, argv);
      game->tour = my_getnbr(argv[4]);
      my_print_game(game, &list, &list1);
      my_histo(&list1, &list);
    }
  else
    my_putstr("Error in argument\n");
  free(list);
  free(list1);
  return (0);
}
