#include "ft_printf.h"

static void ft_putc(char c);
static void ft_printnbr(unsigned int nb);

int ft_putnbr_unsigned(unsigned int nb)
{
  unsigned int  i;

  ft_printnbr(nb);
  i = 1;
  while (nb > 9)
  {
    nb = nb / 10;
    i++;
  }
  return (i);
}

static void ft_putc(char c)
{
  write(1, &c, 1);
}

static void ft_printnbr(unsigned int nb)
{
  if (nb > 9)
    ft_putnbr_unsigned(nb / 10);
  if (nb <= 9)
  {
    ft_putc(nb);
    return ;
  }
  ft_putc((nb % 10) + '0');
}
