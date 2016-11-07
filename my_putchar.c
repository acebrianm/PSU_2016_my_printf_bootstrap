/*
** my_putchar.c for putchar in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Nov  7 20:01:57 2016 cebria_a
** Last update Mon Nov  7 20:02:27 2016 cebria_a
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
