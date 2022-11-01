/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:44:45 by sade-la-          #+#    #+#             */
/*   Updated: 2022/09/27 14:15:26 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_p;
	const char	*src_p;
	size_t		i;

	dst_p = dst;
	src_p = src;
	i = 0;
	if (src_p >= dst_p)
		return (ft_memcpy(dst_p, src_p, n));
	while (n)
	{
		n--;
		dst_p[i + n] = src_p[i + n];
	}
	return (dst);
}
