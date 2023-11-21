/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:33:29 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/21 10:47:46 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l_ptr;

	if (!lst || !del)
		return (NULL);
	while (*lst)
	{
		l_ptr = (*lst)->nex;
		ft_lstdelone(*lst, del);
		*lst = l_ptr;
	}
	*lst = NULL;
}
		
