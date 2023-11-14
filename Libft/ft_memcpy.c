#include  "libft.h"

void  *ft_memcpy (void *dest, const void *src, size_t len)
{
  int i;

  if (!dest || !src)
    return (NULL);
  i = 0;
  while (i < len)
  {
    ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    i++;
  }
  return (dest);
}
