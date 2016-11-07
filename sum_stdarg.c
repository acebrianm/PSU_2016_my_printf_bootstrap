/*
** sum_stdarg.c for sumstdarg in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Nov  7 19:11:12 2016 cebria_a
** Last update Mon Nov  7 20:08:27 2016 cebria_a
*/

#include <stdarg.h>
#include "my.h"

int		sum_stdarg(int i, int nb, ...)
{
  va_list	valist;
  int		sum;
  int		index;

  va_start(valist, nb);
  index = 0;
  sum = 0;
  if (i == 0)
    while (index < nb)
      {
	sum += va_arg(valist, int);
	index++;
      }
  else if (i == 1)
    while (index < nb)
      {
	sum += my_strlen(va_arg(valist, char*));
	index++;
      }
  va_end(valist);
  return (sum);
}
