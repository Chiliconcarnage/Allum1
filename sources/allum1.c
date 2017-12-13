/*
** print_board_game_in_a_pretty_frame.c for pretty fram in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Tue Feb  9 13:29:22 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:12:05 2016 OEM Configuration (temporary user)
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "./includes/get_next_line.h"
#include "./includes/my.h"
#include "./includes/variables.h"

char	**my_pretty_frame(char **tab)
{
  int	i;

  i = 0;
  while (tab[0][i] != '\0')
    {
      tab[0][i] = '*';
      tab[5][i] = '*';
      i++;
    }
  i = 0;
  while (tab[i] != NULL)
    {
      tab[i][0] = '*';
      tab[i][8] = '*';
      i++;
    }
  return (tab);
}

char	**my_pipes(char **tab)
{
  int	i;
  int	y;
  int	a;
  int	b;

  y = 4;
  a = 8;
  b = 1;
  while (y > 0)
    {
      i = b;
      while (b < a)
	{
	  tab[y][b] = '|';
	  b++;
	}
      b = i + 1;
      y--;
      a--;
    }
  return (tab);
}

char	*fill_my_tab(char *tab, char c, int j)
{
  int	i;

  i = 0;
  while (i < j)
    {
      tab[i] = c;
      i++;
    }
  tab[i] = '\0';
  return (tab);
}

char	**my_malloc(char **tab)
{
  int	i;

  i = 0;
  if ((tab = malloc(sizeof(char *) * 7)) == NULL)
    return (0);
  tab[6] = NULL;
  while (i < 6)
    {
      if ((tab[i] = malloc(sizeof(char) * 10)) == NULL)
	return (0);
      tab[i] = fill_my_tab(tab[i], ' ', 9);
      i++;
    }
  tab = my_pretty_frame(tab);
  my_pipes(tab);
  return (tab);
}

int	main(int ac, char **av)
{
  t_all	all;
  static int i = 0;

  srand(time(NULL));
  all.map = my_malloc(all.map);
  display(all.map);
  while (check_pipes(&all) == 0)
    {
      if (all.my_exit == 1)
	return (0);
      if (i == 0)
	my_putchar('\n');
      all.statut = my_game(&all);
      if (all.statut == 0)
	{
	  display(all.map);
	  back_to_line(&all);
	}
      i++;
    }
}
