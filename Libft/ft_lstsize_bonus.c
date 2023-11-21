/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:07:19 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/21 10:10:09 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	temp;

	i = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
