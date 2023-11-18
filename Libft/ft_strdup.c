/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:30:47 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/18 15:26:44 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr_cpy;
	size_t	i;

	i = 0;
	arr_cpy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!arr_cpy)
		return (NULL);
	while (*str != '\0')
		arr_cpy[i++] = *str++;
	arr_cpy[i] = '\0';
	return (arr_cpy);
}
