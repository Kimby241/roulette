/*
** game.c for Colle2 Roulette in /home/kim/FDI_DEVC/colle2/pobava_k/roulette
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 24 11:11:05 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 13:03:39 2015 POBA VANZI Kimberley
*/

#include <unistd.h>
#include <stdlib.h>

void	my_putstr(char *str);
int	get_stake_number();
int	get_stake_amount();
int	set_stake_reward(int stake, int number, int amount);
char	get_response();
int	keep_playing(int i);
void	my_put_nbr(int i);

int	game()
{
  int	profits;
  int	stake_number;
  int	stake_amount;
  int	win_number;
  int	again;
  
  again = 1;
  profits = 200;
  my_putstr("Bienvenue à la roulette de l'ETNA\n");
  my_putstr("Votre gain actuel est de : ");
  my_put_nbr(profits);
  my_putstr("€\n");
  while (again == 1)
    {
      stake_amount = get_stake_amount(profits);
      win_number = (rand()% 35) + 1;
      profits = profits - stake_amount;
      stake_number = get_stake_number();
      profits = profits + set_stake_reward(stake_number,
					   win_number,
					   stake_amount);
      if (keep_playing(profits) == 0)
	return (0);
      else
	again = 1;
    }

  return (0);
}

int	keep_playing(int profits)
{
  my_putstr("Votre gain actuel est de : ");
  my_put_nbr(profits);
  my_putstr("€\n");
  if (profits == 0)
    return (0);
  else if (profits > 0)
    {
      my_putstr("Voulez vous continuer? (y / n)\n");
      if (get_response() == 'y')
	return (1);
      else
	return (0);
    }
  else
    return (0);
}
