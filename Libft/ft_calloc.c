/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:07:32 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/16 00:30:20 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc (size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	if ((total_size / nmemb) != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
