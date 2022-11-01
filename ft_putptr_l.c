/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:18:07 by sade-la-          #+#    #+#             */
/*   Updated: 2022/11/01 23:45:01 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_l(size_t n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_putptr_l(n / 16);
		len += ft_putptr_l(n % 16);
	}
	else
		len += ft_putchar_l(HEX_MIN[n]);
	return (len);
}
