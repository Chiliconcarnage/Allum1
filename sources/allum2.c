/*
** allum2.c for allum2 in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 10:26:23 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:11:59 2016 OEM Configuration (temporary user)
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

void	display(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}

void	free_my_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}
