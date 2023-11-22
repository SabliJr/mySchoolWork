/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:56:19 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/22 17:00:34 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -1 * n;
	}
	else
	nb = n;
	if (nb > 9)
	{
		ft_putnbr_fd(nb % 10, fd);
		ft_putnbr_fd(nb / 10, fd);
	}
	else
		ft_putchar_fd(nb, fd);
}
