/*
** read_line.c for Colle2 Roulette in /home/kim/FDI_DEVC/colle2/pobava_k/roulette
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 24 09:59:31 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 10:12:03 2015 POBA VANZI Kimberley
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char		*read_line()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
