#include  "libft.h"

void  ft_bzero (void *a, size_t n)
{
  unsigned int  i;

  i = 0;
  while (i < n)
  {
    ((unsigned char *)a)[i] = 0;
    i++;
  }
}
