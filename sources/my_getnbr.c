/*
** my_getnbr.c for MY_getnbr in /home/oem/home/CPE_2015_allum1_bootstrap
** 
** Made by OEM Configuration (temporary user)
** Login   <lauque_m@epitech.net>
** 
** Started on  Mon Feb 15 16:29:27 2016 OEM Configuration (temporary user)
** Last update Mon Feb 15 16:31:57 2016 OEM Configuration (temporary user)
*/

int	my_getnbr(char	*str)
{
  int	i;
  int	res;
  int	multi;
  int	is_neg;

  i = my_strlen(str) - 1;
  multi = 1;
  res = 0;
  is_neg = 0;
  if (str[0] == '-')
    is_neg = 1;
  while (i >= is_neg)
    {
      res = (str[i] - 48) * multi + res;
      i = i - 1;
      multi = multi * 10;
    }
  if (is_neg == 1)
    res = -res;
  return (res);
}
