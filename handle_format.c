/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 22:51:31 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/18 22:00:49 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(const char spec, va_list args)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (spec == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_plsputnbr(va_arg(args, unsigned int)));
	else if (spec == 'x' || spec == 'X')
		return (ft_puthex(va_arg(args, unsigned int), spec));
	else if (spec == '%')
		return (write(1, "%", 1));
	return (0);
}
