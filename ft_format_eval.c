/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_eval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:15:52 by sade-la-          #+#    #+#             */
/*   Updated: 2022/11/02 12:16:57 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_l(char c)
{
	write(1, &c, 1);
	return (1);
}

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
		len += ft_putchar_l(n + '0');
	return (len);
}

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

int	ft_putstr_l(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (*s)
		write(1, &*s, ft_strlen(s));
	return (ft_strlen(s));
}
