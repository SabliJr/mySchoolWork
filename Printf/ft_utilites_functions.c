/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilites_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:19:01 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/27 13:22:25 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putpercentage(void)
{
	write(1, '%', 1);
	return (1);
}
