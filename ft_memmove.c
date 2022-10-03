/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 01:31:08 by carlde-l          #+#    #+#             */
/*   Updated: 2022/06/29 21:39:50 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned const char *)src;
	if (dest > source)
	{
		while (len--)
			dest[len] = source[len];
	}
	else if (dest < source)
		ft_memcpy(dst, src, len);
	return ((void *)dst);
}

//overlapping would occur. Imagine a memory segment starts at address 0x51, 
//and the other starts at address 0x70, and you try to copy 50 bytes 
//from 0x51 to 0x70.
