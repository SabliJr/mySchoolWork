#include  "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*lookUp;

	lookUp = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			lookUp = str;
		str++;
	}
	return ((char *)lookUp);
}
