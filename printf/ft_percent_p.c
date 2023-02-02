/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay < hatalay@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:46:52 by hatalay           #+#    #+#             */
/*   Updated: 2023/02/01 23:07:07 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_percent_p(unsigned long long a, int *count)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	if (a >= 16)
	{
		ft_percent_p(a / 16, count);
		ft_percent_p(a % 16, count);
	}
	else
		ft_putchar(hex_chars[a], count);
}

void	ft_percent_u(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	if (n < 10)
		ft_putchar(n + 48, count);
}
