/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 18:04:08 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/22 16:32:10 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, const char spec)
{
	int	ret;
	int	count;
	int	rem;

	count = 0;
	if (n >= 16)
	{
		ret = ft_puthex(n / 16, spec);
		if (ret == -1)
			return (-1);
		count = count + ret;
	}
	rem = n % 16;
	if (rem > 9 && spec == 'X')
		rem = rem + 55;
	else if (rem > 9 && spec == 'x')
		rem = rem + 87;
	else
		rem = rem + '0';
	ret = ft_putchar(rem);
	if (ret == -1)
		return (-1);
	count = count + ret;
	return (count);
}
