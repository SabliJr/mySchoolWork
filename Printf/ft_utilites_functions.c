/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilites_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:19:01 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/27 13:22:25 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putpercentage(void)
{
	write(1, "%", 1);
	return (1);
}

int ft_putstr(char *s)
{
  unsigned int  i;

  i = 0;
  if (!s)
  {
    write(1, "NULL", 4);
    return (6);
  }

  while (s[i])
  {
    write(1, &s[i], 1);
    i++;
  }
  return (i);
}

int ft_putnbr(int n)
{
  unsigned int  i;
  unsigned int  nbr;

  if (n < 0)
  {
    ft_putchar('-');
    nbr = -n;
    i++;
  }
  else
    nbr = n;
  if (nbr > 9)
  {
    ft_putnbr(nbr / 10);
    i++;
  }
  ft_putchar((nbr % 10) + '0');
  return (i);
}
