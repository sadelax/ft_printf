/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:21:06 by sade-la-          #+#    #+#             */
/*   Updated: 2022/11/01 22:16:06 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_l(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar_l('-');
		len += ft_putnbr_l(-n);
	}				
	else if (n > 9)
	{
		len += ft_putnbr_l(n / 10);
		len += ft_putnbr_l(n % 10);
	}
	else
	{
		len += ft_putchar_l(n + '0');
	}
	return (len);
}
