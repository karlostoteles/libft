/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:52:10 by carlde-l          #+#    #+#             */
/*   Updated: 2022/09/29 08:33:01 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	c = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = '\0';
	return (c);
}
