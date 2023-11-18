/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:09:15 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/18 15:10:50 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*a1;
	const unsigned char	*a2;
	size_t				i;

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
