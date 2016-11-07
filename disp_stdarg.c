/*
** disp_stdarg.c for disp in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Nov  7 19:47:39 2016 cebria_a
** Last update Mon Nov  7 20:22:25 2016 cebria_a
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int		disp_stdarg(char *s, ...)
{
  va_list	valist;
  int		nb;
  int		i;

  nb = my_strlen(s);
  i = 0;
  va_start(valist, s);
  while (i < nb)
    {
      if (s[i] == 'c')
	my_putchar(va_arg(valist, int));
      else if (s[i] == 's')
	my_putstr(va_arg(valist, char*));
      else if (s[i] == 'i')
	my_put_nbr(va_arg(valist, int));
      else
	{
	  write(2, "Wrong parameter.\n", 16);
	  return (84);
	}
      my_putchar('\n');
      i++;
    }
  va_end(valist);
  return (0);
}
