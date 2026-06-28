/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 19:00:23 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/22 18:12:25 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		ret;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			ret = handle_format(format[++i], args);
		else
			ret = ft_putchar(format[i]);
		if (ret == -1)
			return (va_end(args), -1);
		count = count + ret;
		i++;
	}
	va_end(args);
	return (count);
}
