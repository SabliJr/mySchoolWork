/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:08:56 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/27 13:18:19 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putpercentage(void);
int	ft_formates(va_list args, const char formate);
int	ft_putchar(char c);
int ft_putstr(char *s);
int ft_putptr(unsigned long long);
int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int);
int ft_puthex(unsigned int nb, const char formate);

#endif
