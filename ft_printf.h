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

# include <unistd.h>		// write
# include <stdarg.h>		// va_list..
# include <stdlib.h>		// malloc, free
# include <stdio.h>			// printf tester

# ifndef FD
#  define FD 1
# endif

# define DECIMAL "0123456789"
# define HEXADECIMAL "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_putstr_fd(char *s, int fd);
int	ft_putchar_fd(char s, int fd);
int	ft_putnbr_fd(int n, int fd);

#endif