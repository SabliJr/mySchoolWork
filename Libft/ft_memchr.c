#include  "libft.h"

void  *ft_memchr (const void *str, int c, size_t n)
{
  const unsigned char *a;

  a = str;
  while (n-- > 0)
  {
    if (*a == (unsigned char)c)
      return ((void *)a);
    a++;
  }
  return (NULL);
}
