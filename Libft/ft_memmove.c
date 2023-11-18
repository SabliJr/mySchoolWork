/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:09:56 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/18 15:15:44 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	temp[1000000];
	int	i;

	i = 0;
	while (i < len)
		temp[i] = ((unsigned char *)src)[i];
	i = 0;
	while (i < len)
		((unsigned char *)dest)[i] = temp[i];
	return (dest);
}
