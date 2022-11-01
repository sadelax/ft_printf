/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:42:13 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 00:16:47 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long	i;
	unsigned long	l_d;
	unsigned long	l_s;

	i = 0;
	l_d = 0;
	l_s = ft_strlen(src);
	if (dst)
		l_d = ft_strlen(dst);
	if (l_d >= size)
		return (l_s + size);
	while (((l_d + i) < (size - 1)) && src[i])
	{
		dst[l_d + i] = src[i];
		i++;
	}
	dst[l_d + i] = '\0';
	return (l_d + l_s);
}
