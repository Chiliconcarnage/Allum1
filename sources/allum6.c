/*
** allum6.c for allum6 in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 10:39:33 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:13:10 2016 OEM Configuration (temporary user)
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

int	my_if(t_all *all, char *tmp, int j)
{
  if (j == 0)
    my_putstr("Your turn:\n");
  my_putstr("Line: ");
  tmp = get_next_line(0, all);
  if (tmp == NULL)
    return (-1);
  if (check_int(tmp) == -1)
    {
      j++;
      return (-1);
    }
  else if (check_range(tmp, all) == -1)
    {
      j++;
      return (-1);
    }
  else if (check_empty(tmp, all) == -1)
    {
      j++;
      return (-1);
    }
}

void	my_last_if(t_all *all)
{
  my_putstr("Player removed ");
  my_put_nbr(all->matche);
  my_putstr(" match(es) from line ");
  my_put_nbr(all->line);
  my_putchar('\n');
}

void	my_else(t_all *all)
{
  my_putstr("AI's turn...\n");
  ia_turn(all);
  my_putstr("AI removed ");
  my_put_nbr(all->matche);
  my_putstr(" match(es) from line ");
  my_put_nbr (all->line);
  my_putchar('\n');
}

int	my_second_if(t_all *all, char *tmp, int j)
{
  if (check_int(tmp) == -1)
    {
      j++;
      return (-1);
    }
  else if (check_tmp(tmp, all) == -1)
    {
      j++;
      return (-1);
    }
  else if (check_nb_match(all) == -1)
    {
      j++;
      return (-1);
    }
  else if (check_matches(tmp, all) == -1)
    {
      j++;
      return (-1);
    }
}
