/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:21:58 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/21 10:26:03 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tem;

	if (!new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return (NULL);
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
