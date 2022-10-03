/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlde-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 03:11:13 by carlde-l          #+#    #+#             */
/*   Updated: 2022/09/29 10:07:03 by carlde-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_intlen(long n)
{
	int	m;

	m = 1;
	while (n / 10)
	{
		n = n / 10;
		m++;
	}
	return (m);
}

static char	ft_signed(int sign)
{
	if (sign == 1)
		return ('-');
	return ('\0');
}

char	*ft_itoa(int n)
{
	char	*c;
	int		len;
	int		sign;
	long	m;

	m = (long)n;
	sign = 0;
	if (m < 0)
	{
		m *= -1;
		sign = 1;
	}
	len = ft_intlen(m);
	c = (char *)malloc(len + sign + 1);
	if (!c)
		return (0);
	c[len + sign] = '\0';
	c[0] = ft_signed(sign);
	while (len > 0)
	{
		c[len + sign - 1] = m % 10 + '0';
		m = m / 10;
		len--;
	}
	return (c);
}
