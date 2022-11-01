/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-la- <sade-la-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:49:52 by sade-la-          #+#    #+#             */
/*   Updated: 2022/10/16 13:49:52 by sade-la-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"	// ft_strlen, ft_putchar_fd
# include <unistd.h>		// write
# include <stdarg.h>		// va_list..
# include <stdlib.h>		// malloc, free
# include <stdio.h>			// printf tester
# include <limits.h>		// LONG_MIN, LONG_MAX

# ifndef FD
#  define FD 1
# endif

# define DECIMAL "0123456789"
# define HEX_MIN "0123456789abcdef"
# define HEX_MAY "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_putstr_l(char *s);
int	ft_putchar_l(char s);
int	ft_putnbr_l(long int n);
int	ft_putnbr_base_l(unsigned int n, char *hex);
int	ft_putptr_l(size_t n);

#endif