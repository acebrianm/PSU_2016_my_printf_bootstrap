/*
** my_strlen.c for strlen in /Users/acebrianm/EPITECH/PSU_2016_my_printf_bootstrap
** 
** Made by cebria_a
** Login   <alexandro.cebrianmancera@epitech.eu>
** 
** Started on  Mon Nov  7 19:23:35 2016 cebria_a
** Last update Mon Nov  7 20:01:22 2016 cebria_a
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}
