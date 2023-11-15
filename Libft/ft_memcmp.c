#include  "libft.h"

int ft_memcmp (const void *str1, const void *str2, size_t n)
{
  size_t i;
  const unsigned char *a1;
  const unsigned char *a2;

  a1 = str1;
  a2 = str2;
  i = 0;
  while (i < n)
  {
    if (a1[i] < a2[i])
      return (-1);
    else if (a1[i] > a2[i])
        return (1);
    i++;
  }
  return (0);
}
