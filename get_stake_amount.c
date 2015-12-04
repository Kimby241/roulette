/*
** get_stake_amount.c for Colle1 Roulette in /home/kim/FDI_DEVC/colle2/pobava_k/roulette
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 24 09:44:08 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 12:44:05 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

char	*read_line();
void	my_putstr(char *str);
int	my_getnbr(char *str);

int	get_stake_amount(int profits)
{
  int	amount;

  my_putstr("--> Quel est le montant de votre mise ?\n");
  amount = my_getnbr((read_line()));
  while (amount <= 0)
    {
      my_putstr("Error : Veillez entrer un montant supérieur à 0\n");
      amount = my_getnbr((read_line()));
    }
  while (amount > profits)
    {
      my_putstr("Error : Votre mise est supérieure à votre gain.\n");
      amount = my_getnbr((read_line()));
      while (amount <= 0)
	{
	  my_putstr("Error : Veillez entrer un montant supérieur à 0\n");
	  amount = my_getnbr((read_line()));
	}      
    }
  return (amount);
}
