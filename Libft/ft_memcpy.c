/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:56:29 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 00:23:01 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_p;
	const unsigned char	*src_p;
	size_t				i;

	dst_p = dst;
	src_p = src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (n)
	{
		dst_p[i] = src_p[i];
		i++;
		n--;
	}
	return (dst);
}
