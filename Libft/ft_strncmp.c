/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:13:07 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/18 13:13:09 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int ft_strncmp (const char *str1, const char *str2, size_t n)
{
  unsigned int i;

  i = 0;
  if (n == 0)
    return (0);
  if (!str1 || !str2)
    return (0);
  while ((i < n - 1) && (str1[i] != '\0' || str2[i] != '\0'))
  {
    if (str1[i] != str2[i])
      return (str1[i] - str2[i]);
    i++;
  }
  return (str1[i] - str2[i]);
}
