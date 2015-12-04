/*
** get_response.c for Colle2 Roulette in /home/kim/FDI_DEVC/colle2/pobava_k/roulette
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 24 11:49:34 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 12:57:26 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

char	*read_line();
int	my_strcmp(char *str1, char *str2);
void	my_putstr(char *s);

char	get_response()
{
  char	*response;

  response =  read_line();
  while (my_strcmp(response, "y") != 0 && my_strcmp(response, "n") != 0)
    {
      my_putstr("Error : Vous devez choisir 'y' ou 'n'.\n");
      response =  read_line();
    }
  if(my_strcmp("y",response) == 0)
    return ('y');
  else
    return ('n');
}
