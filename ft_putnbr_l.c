/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:21:06 by sade-la-          #+#    #+#             */
/*   Updated: 2022/11/01 16:33:16 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_l(long int n)
{
	static int	len;

	if (n < 0)
	{
		ft_putchar_fd('-', FD);
		ft_putnbr_l(-n);
	}				
	else if (n > 9)
	{
		ft_putnbr_l(n / 10);
		ft_putnbr_l(n % 10);
	}
	else
	{
		++len;
		ft_putchar_fd(n + '0', FD);
	}
	return (len);
}
