/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttatsuno <ttatsuno@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 15:55:36 by ttatsuno          #+#    #+#             */
/*   Updated: 2026/06/22 18:05:14 by ttatsuno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	ret;
	int	count;

	if (!str)
		str = "(null)";
	count = 0;
	while (str[count] != '\0')
	{
		ret = ft_putchar(str[count]);
		if (ret == -1)
			return (-1);
		count = count + ret;
	}
	return (count);
}
