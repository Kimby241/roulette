/*
** get_stake_number.c for Colle2 Roulette in /home/kim/FDI_DEVC/colle2/pobava_k/roulette
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 24 10:24:01 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 10:39:36 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

int	my_getnbr(char *str);
void	my_putstr(char *str);
char	*read_line();

int	get_stake_number()
{
  int	stake_number;

  my_putstr("--> Sur quel chiffre misez vous ?\n");
  stake_number = my_getnbr(read_line());
  while (!(stake_number > 0 && stake_number < 37))
    {
      my_putstr("Error : Vous devez miser entre 1 et 36.\n");
      stake_number = my_getnbr(read_line());
    }
  return (stake_number);
}
