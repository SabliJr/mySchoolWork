#include "ft_printf.h"

static int  hex_len(unsigned int num);
static void ft_printchar(char c);
static void ft_printhex(unsigned int nb, const char f);

static int  hex_len(unsigned int num)
{
  unsigned int  len;

  len = 0;
  while (num != 0)
  {
    num = num / 16;
    len++;
  }
  return (len);
}

static void ft_printhex(unsigned int nb, const char f)
{
  if (nb >= 16)
  {
    ft_printhex(nb / 16, f);
    ft_printhex(nb % 16, f);
  }
  else
  {
    if (nb <= 9)
      ft_printchar(nb);
    else
    {
      if (f == 'x')
        ft_printchar((nb - 10) + 'a');
      if (f == 'X')
        ft_printchar((nb - 1) + 'A');
    }
  }
}

int ft_puthex(unsigned int nb, const char formate)
{
  if (nb == 0)
    write(1, "0", 1);
  else
    ft_printhex(nb, formate);
  return (hex_len(nb));
}

static void ft_printchar(char c)
{
  write(1, &c, 1);
}
