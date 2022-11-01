/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:23:10 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 20:47:27 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	len;
	long int	ncpy;
	char		*dst;

	len = ft_len(n);
	ncpy = n;
	dst = ft_calloc(sizeof(char), len + 1);
	if (!dst)
		return (0);
	if (ncpy < 0)
	{
		ncpy = ncpy * (-1);
		dst[0] = '-';
	}
	while (len > 0)
	{
		if (dst[0] == '-' && len == 1)
			return (dst);
		dst[len - 1] = ncpy % 10 + '0';
		ncpy = ncpy / 10;
		len--;
	}
	return (dst);
}
