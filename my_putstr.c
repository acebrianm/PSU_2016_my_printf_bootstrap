/*
** my_putstr.c for putstr in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Nov  7 20:03:01 2016 cebria_a
** Last update Mon Nov  7 20:03:47 2016 cebria_a
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
