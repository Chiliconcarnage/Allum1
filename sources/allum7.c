/*
** allum7.c for allum7 in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 10:46:25 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:13:26 2016 OEM Configuration (temporary user)
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

int	my_under_game(t_all *all, char *tmp)
{
  if (check_nb_match(all) == -1)
    {
      nb = 1;
      return (nb);
    }
  my_else(all);
}

int	my_cond(t_all *all, int nb)
{
  if (check_nb_match(all) == -1)
    {
      nb = 1;
      return (nb);
    }
  my_else(all);
}

int	my_game(t_all *all)
{
  if ((i%2) == 0)
    {
      if (check_nb_match(all) == -1)
	return (0);
      if (my_if(all, tmp, j) == -1)
      	{
          j++;
          return (-1);
      	}
      my_putstr("Matches: ");
      tmp = get_next_line(0, all);
      if (tmp == NULL)
	return (-1);
      if (my_second_if(all, tmp, j) == -1)
	{
          j++;
          return (-1);
	}
      my_last_if(all);
    }
  else
    {
      if (check_nb_match(all) == -1)
	return (nb = 1);
      my_else(all);
    }
  my_new_map(all);
  j = 0;
  i++;
  return (0);
}

void	back_to_line(t_all *all)
{
  if (check_nb_match(all) != -1)
    my_putchar('\n');
}
