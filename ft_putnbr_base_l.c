/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:26:42 by sade-la-          #+#    #+#             */
/*   Updated: 2022/11/01 17:53:03 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_l(unsigned int n, char *hex)
{
	static int	l;
			
	if (n >= ft_strlen(hex))
	{
		ft_putnbr_base_l(n / ft_strlen(hex), hex);
		ft_putnbr_base_l(n % ft_strlen(hex), hex);
	}
	else
	{
		++l;
		ft_putchar_fd(hex[n], FD);
	}
	return (l);
}
