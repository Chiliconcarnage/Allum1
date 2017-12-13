/*
** allum3.c for allum3 in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 10:27:48 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:12:22 2016 OEM Configuration (temporary user)
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

int	check_pipes(t_all *all)
{
  int   x;
  int   y;

  x = 0;
  y = 0;
  while (all->map[y] != NULL)
    {
      while (all->map[y][x] != '\0')
        {
          if (all->map[y][x] == '|')
            return (0);
          x++;
        }
      x = 0;
      y++;
    }
  if (my_game(all) == 1)
    my_putstr("You lost, too bad..\n");
  if (my_game(all) == 0)
    my_putstr("I lost.. snif.. but I'll get you next time!!\n");
  return (-1);
}
