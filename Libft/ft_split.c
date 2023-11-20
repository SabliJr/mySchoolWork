/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:35:34 by sabakar-          #+#    #+#             */
/*   Updated: 2023/11/20 13:21:38 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (s[x])
	{
		while (s[x] == c && s[x])
			x++;
		if (s[x] == c)
			count++;
		while (s[x] != c && s[x])
			x++;
	}
	return (count);
}

void	free_mem(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static int	word_len(int strater, char const *s, char c)
{
	int	len;
	int	i;

	i = strater;
	len = 0;
	while (s[i] && s[i] != c)
		i++;
	len = i - strater;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char		**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * word_count(s, c) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count(s, c))
	{
		k = 0;
		while (s[j] == c && s[j])
			j++;
		str[j] = (char *)malloc(sizeof(char) * word_len(j, s, c) + 1);
		if (!str[j])
			return (str[j] = '\0', free_mem(str), NULL);
		while (str[j] != c && str[j])
			str[j][k++] = str[j++];
		str[j++][k] = '\0';
	}
	return (str[j] = '\0', str);
}
