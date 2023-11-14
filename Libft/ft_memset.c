#include  "libft.h"

void  *ft_memset (void *a, int c, size_t len)
{
  unsigned char *y;

  y = (unsigned char *)a;
  if (a == NULL || len <= 0)
    return (a);
  while (len > 0)
  {
    *y = (unsigned char)c;
    y++;
    len--;
  }
  return (a);
}
