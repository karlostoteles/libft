/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:05:04 by carlde-l          #+#    #+#             */
/*   Updated: 2022/10/02 18:55:31 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_free(char **aux, size_t j)
{
	while (j >= 0)
	{
		free(aux[j]);
		j--;
	}
	free(aux);
	aux = NULL;
	return (0);
}

size_t	ft_countwords(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	size_t	i;
	size_t	j;
	size_t	l;

	if (!s)
		return (0);
	i = -1;
	j = 0;
	aux = ft_calloc(sizeof(char *), (ft_countwords(s, c) + 1));
	if (!aux)
		return (0);
	while (++i <= ft_strlen(s))
	{
		l = 0;
		while (s[i] != c && s[i] && ++i)
			l++;
		if (l >= 1)
		{
			aux[j++] = ft_substr(s, (i - l), l);
			if (!aux[j - 1])
				return (ft_free(aux, j));
		}
	}
	return (aux);
}
