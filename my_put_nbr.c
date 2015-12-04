/*
** my_pu_nbr.c for FDI-DEVC Jour 05 my_put_nbr in /home/kim/FDI_DEVC/jour05/my_put_nbr
** 
** Made by POBA VANZI Kimberley
** Login   <pobava_k@etna-alternance.net>
** 
** Started on  Fri Oct 23 14:02:36 2015 POBA VANZI Kimberley
** Last update Fri Oct 23 16:13:22 2015 POBA VANZI Kimberley
*/

#include <unistd.h>

void	my_putchar(char c);
void	not_null(int i, int pow, int tmp);

void	my_put_nbr(int i)
{
  int	tmp;
  int	pow;
  
  pow = 1;
  if (i < 0)
    {
      my_putchar('-');
      i = 0 - i;
      }
  tmp = i;  
  if (i == 0)
    my_putchar('0');
  else
    {
      not_null(i, pow, tmp);
    }
}

void	not_null(int i, int pow, int tmp)
{
  while (tmp > 9)
    {
      pow = pow * 10;
      tmp = tmp / 10;
    }
  while (i > 0)
    {
      my_putchar(i / pow + 48);
      i = i % pow;
      while (i == 0 && pow != 1)
	{
	  my_putchar('0');
	  pow = pow / 10;
	}
      pow = pow / 10;
    }
}
