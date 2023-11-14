#include  "libft.h"

size_t  ft_strlcpy (char *dst, const char *src, size_t len)
{
  int i;
  int src_len;

  src_len = ft_strlen(src);
  if (!src || !dst)
    return (0);
  if (len > 0)
  {
    i = 0;
    while (i < len - 1)
    {
      dst[i] = src[i];
      i++;
    }
    dst[i] = '\0';
  }
  return (src_len);
}
