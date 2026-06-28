/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plsputnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 17:30:38 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/22 16:22:43 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_plsputnbr(unsigned int n)
{
	int				ret;
	int				count;

	count = 0;
	if (n >= 10)
	{
		ret = ft_plsputnbr(n / 10);
		if (ret == -1)
			return (-1);
		count = count + ret;
	}
	ret = ft_putchar(n % 10 + '0');
	if (ret == -1)
		return (-1);
	count = count + ret;
	return (count);
}
