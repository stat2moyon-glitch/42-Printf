/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 18:04:08 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/23 08:04:27 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_hex(unsigned long num)
{
	int		count;
	int		ret;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
	{
		ret = ft_putptr_hex(num / 16);
		if (ret == -1)
			return (-1);
		count = count + ret;
	}
	ret = ft_putchar(base[num % 16]);
	if (ret == -1)
		return (-1);
	count = count + ret;
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	nb;
	int				count;
	int				ret;

	if (!ptr)
		return (ft_putstr("(nil)"));
	nb = (unsigned long)ptr;
	count = 0;
	ret = ft_putstr("0x");
	if (ret == -1)
		return (-1);
	count = count + ret;
	ret = ft_putptr_hex(nb);
	if (ret == -1)
		return (-1);
	count = count + ret;
	return (count);
}
