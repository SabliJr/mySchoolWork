/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:10:34 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/21 10:17:21 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_List *lst)
{
	t_list	_list;

	if (lst == NULL)
		return (NULL);
	_list = lst;
	while (_list->next != NULL)
		_list = _list->next;
	return (_list);
}	
