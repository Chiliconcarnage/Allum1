##
## Makefile for Makefile in /home/oem/home/CPE_2015_allum1_bootstrap
## 
## Made by OEM Configuration (temporary user)
## Login   <lauque_m@epitech.net>
## 
## Started on  Sat Feb 20 12:44:24 2016 OEM Configuration (temporary user)
## Last update Thu Feb 25 12:17:11 2016 OEM Configuration (temporary user)
##

CC = cc

SRC = ./sources/allum1.c \
      ./sources/allum2.c \
      ./sources/allum3.c \
      ./sources/allum4.c \
      ./sources/allum5.c \
      ./sources/allum6.c \
      ./sources/allum7.c \
      ./sources/my_put_nbr.c \
      ./sources/my_getnbr.c \
      ./sources/get_next_line.c \
      ./sources/my_putchar.c \
      ./sources/my_putstr.c \
      ./sources/my_strlen.c

RM = rm -f

NAME = allum1

DIR_LIB = -L./

FLAGS = -ansi -pedantic -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(NAME)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(DIR_LIB)

all: $(NAME)

cleean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
