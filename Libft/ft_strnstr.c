/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:13:28 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/18 16:00:15 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
