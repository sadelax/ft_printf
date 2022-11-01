/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 22:25:16 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/30 22:25:16 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format_eval(va_list args, char format)
{
	int ret;

	ret = 0;
	if (format == '%')
		ret += ft_putchar_fd('%', FD);
	else if (format == 's')
		ret += ft_putstr_fd(va_arg(args, char *), FD);
	else if (format == 'c')
		ret += ft_putchar_fd(va_arg(args, int), FD);
	else if (format == 'd' || format == 'i')
		ret += ft_putnbr_fd(va_arg(args, int), FD);
	return (ret);
}

int	ft_printf(char const *format, ...)
{
	va_list args;
	int 	len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_format_eval(args, format[i + 1]);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}

int	main()
{
	printf("%d\n", ft_printf("%d\n", -122));
	printf("%d", printf("%d\n", -122));
}