/*
** set_stake_reward.c for Colle1 Roulette in /home/kim/FDI_DEVC/colle2/pobava_k/roulette
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Sat Oct 24 10:44:40 2015 POBA VANZI Kimberley
** Last update Sat Oct 24 12:47:56 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

int	my_is_event(int ndr);
int	my_is_even(int i);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_put_nbr(int i);

int	set_stake_reward(int stake_number,
			 int win_number,
			 int stake_amount)
{
  my_putstr("Les jeux sont faits...\n");
  my_putstr("Le résultat est : ");
  my_put_nbr(win_number);
  my_putchar('\n');
  if (stake_number == win_number)
    {
      my_putstr("Bien joué. Votre mise augmente de : ");
      my_put_nbr(stake_amount * 3);
      my_putstr("€\n");
      return (stake_amount * 3);
    }
  else if (my_is_even(stake_number) == my_is_even(win_number))
    {
      my_putstr("Votre mise est de la même couleur. Vos gains augmentent de :");
      my_put_nbr(stake_amount / 2);
      my_putstr("€\n");
      return (stake_amount / 2);
    }
  else
    {
      my_putstr("Vous n'avez rien gagné. Vous perdez donc votre mise.\n\n");
      return (0);
    }
    }
