/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 21:35:18 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/22 15:22:01 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	handle_format(const char spec, va_list args);

int	ft_putchar(int n);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_plsputnbr(unsigned int n);
int	ft_puthex(unsigned int n, const char spec);
int	ft_putptr(void *ptr);

#endif
