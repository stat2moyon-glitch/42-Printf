/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 21:46:46 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/22 16:14:29 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		count;
	int		ret;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		count++;
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ret = ft_putnbr(nb / 10);
		if (ret == -1)
			return (-1);
		count = count + ret;
	}
	ret = ft_putchar(nb % 10 + '0');
	if (ret == -1)
		return (-1);
	count = count + ret;
	return (count);
}
