/*
** allum5.c for allum5 in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 10:36:51 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:12:55 2016 OEM Configuration (temporary user)
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

int     check_nb_match(t_all *all)
{
  int   x;
  int   y;
  int   nb;

  x = 0;
  y = 0;
  nb = 0;
  while (all->map[y] != NULL)
    {
      while (all->map[y][x] != '\0')
        {
          if (all->map[y][x] == '|')
            nb++;
          x++;
        }
      x = 0;
      y++;
    }
  if (nb == 0)
    return (-1);
  return (0);
}

char    **my_new_map(t_all *all)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (all->map[all->line][i] != '\0')
    {
      if (all->map[all->line][i] == '|')
        j = i;
      i++;
    }
  i = all->matche;
  while (i > 0)
    {
      all->map[all->line][j] = ' ';
      j--;
      i--;
    }
  return (all->map);
}

int     check_ia(t_all *all)
{
  int   x;
  int   y;
  int   nb;

  x = 0;
  nb = 0;
  y = all->line;
  while (all->map[y][x] != '\0')
    {
      if (all->map[y][x] == '|')
        nb++;
      x++;
    }
  if (nb < all->matche)
    return (-1);
  return (0);
}

int     ia_turn(t_all *all)
{
  int   i;

  i = 0;
  while (i == 0)
    {
      all->line = 1 + rand() %(4 - 1 + 1);
      all->matche = 1 + rand() %(7 - 1 + 1);
      if ((check_ia(all)) == 0)
        i = 1;
    }
  return (0);
}

int     my_first_if(t_all *all, int nb)
{
  if (check_nb_match(all) == -1)
    {
      nb = 0;
      return (nb);
    }
}
