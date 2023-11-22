/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:12:27 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/22 17:18:31 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int	src_len;

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
