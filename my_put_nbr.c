/*
** my_put_nbr.c for putnbr in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Nov  7 20:05:09 2016 cebria_a
** Last update Mon Nov  7 20:12:28 2016 cebria_a
*/

#include "my.h"

int	recursive_function(int nb, int i)
{
  char	number;
  int	tmp;

  number = '0';
  tmp = 1;
  if (nb == 0 && i == 0)
    my_putchar('0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb != 0)
    {
      tmp = nb % 10;
      number = tmp + '0';
      recursive_function(nb / 10, 1);
      my_putchar(number);
    }
  return (0);
}

int	my_put_nbr(int nb)
{
  recursive_function(nb, 0);
  return (0);
}
