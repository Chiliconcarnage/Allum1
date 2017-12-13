/*
** allum4.c for allum4 in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 10:33:43 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:12:39 2016 OEM Configuration (temporary user)
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

int	check_int(char *str)
{
  int   a;
  int   i;

  a = 0;
  i = my_strlen(str);
  if (i == 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (-1);
    }
  while (str[a] != '\0')
    {
      if (str[a] < '0' || str[a] > '9')
        {
          my_putstr("Error: invalid input (positive number expected)\n");
          return (-1);
        }
      a++;
    }
}

int	check_range(char *str, t_all *all)
{
  all->line = my_getnbr(str);
  if (all->line > 0 && all->line < 5)
    {
      return (0);
    }
  my_putstr("Error: this line is out of range\n");
  return (-1);
}

int	check_empty(char *str, t_all *all)
{
  int   i;
  int   nb;

  nb = 0;
  i = 0;
  all->line = my_getnbr(str);
  while (all->map[all->line][i] != '\0')
    {
      if (all->map[all->line][i] == '|')
        nb++;
      i++;
    }
  if (nb <= 0)
    {
      my_putstr("Error: this line is empty\n");
      return (-1);
    }
  return (0);
}

int	check_matches(char *str, t_all *all)
{
  int   i;
  int   nb;

  nb = 0;
  i = 0;
  while (all->map[all->line][i] != '\0')
    {
      if (all->map[all->line][i] == '|')
	nb++;
      i++;
    }
  if (nb < all->matche)
    {
      my_putstr("Error: not enough matches on this line\n");
      return (-1);
    }
  return (0);
}

int	check_tmp(char *str, t_all *all)
{
  all->matche = my_getnbr(str);
  if (all->matche == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (-1);
    }
  return (0);
}
