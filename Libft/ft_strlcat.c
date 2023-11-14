#include  "libft.h"

size_t  ft_strlcat (char *dst, const char *src, size_t len)
{
  size_t i;
  unsigned int dst_len;
  unsigned int src_len;

  i = 0;
  dst_len = ft_strlen(dst);
  src_len = ft_strlen(src);
  if (len <= dst_len)
    return (len + src_len);
  while (src[i] && ((dst_len + i) < len - 1))
  {
    dst[dst_len + i] = src[i];
    i++;
  }
  dst[dst_len + i] = '\0';
  return (src_len + dst_len);
}
