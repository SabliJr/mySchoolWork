/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:13:20 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/22 15:21:09 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*look_up;

	look_up = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			look_up = str;
		str++;
	}
	return ((char *)look_up);
}
