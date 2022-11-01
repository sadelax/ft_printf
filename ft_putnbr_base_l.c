/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:26:42 by sade-la-          #+#    #+#             */
/*   Updated: 2022/11/02 00:10:40 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_l(unsigned int n, char *hex)
{
	int	len;

	len = 0;
	if (n >= ft_strlen(hex))
	{
		len += ft_putnbr_base_l(n / ft_strlen(hex), hex);
		len += ft_putnbr_base_l(n % ft_strlen(hex), hex);
	}
	else
		len += ft_putchar_l(hex[n]);
	return (len);
}
