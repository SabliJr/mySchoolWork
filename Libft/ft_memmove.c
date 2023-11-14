#include  "libft.h"

void  *ft_memmove (void *dest, const void *src, size_t len)
{
  char  temp[1000000];
  int  i;

  i = 0;
  while (i < len) {
    temp[i] = ((unsigned char *)src)[i];
  }
  i = 0;
  while (i < len)
  {
    ((unsigned char *)dest)[i] = temp[i];
  }
  return (dest);
}
