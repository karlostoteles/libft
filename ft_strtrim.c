/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:53:02 by carlde-l          #+#    #+#             */
/*   Updated: 2022/09/29 08:49:44 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char	*str;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	len = ft_strlen(s1);
	while ((ft_strchr(set, s1[start])) != '\0' && (start < len))
		start++;
	while ((ft_strchr(set, s1[len])) != '\0' && (start < len))
		len--;
	str = (char *)malloc(sizeof(*s1) * len - start + 2);
	if (!str)
		return (0);
	i = 0;
	while (start <= len)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
