/*
** my_putchar.c for my_putchar in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Sat Feb 20 12:58:46 2016 OEM Configuration (temporary user)
** Last update Thu Feb 25 12:14:41 2016 OEM Configuration (temporary user)
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include "./includes/get_next_line.h"
#include "./includes/my.h"

void    my_putchar(char a)
{
  write(1, &a, 1);
}
