/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 23:42:08 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 00:24:52 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*d;

	len = ft_strlen(s1);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		d[len] = s1[len];
		len++;
	}
	d[len] = '\0';
	return (d);
}
