/*
** my_strlen.c for my_strlen in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 13:00:55 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:15:26 2016 OEM Configuration (temporary user)
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "./includes/get_next_line.h"
#include "./includes/my.h"

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return(i);
}
