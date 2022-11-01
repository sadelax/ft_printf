/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:11:01 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/02 21:00:52 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long int	ft_check_len(unsigned long long int res, int sign)
{
	if (res > 9223372036854775806 && sign > 0)
		return (-1);
	if (res > (9223372036854775806 + 1) && sign < 0)
		return (0);
	return (res);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10);
		res = (res + (str[i] - 48));
		i++;
	}
	res = ft_check_len(res, sign);
	return (res * sign);
}
