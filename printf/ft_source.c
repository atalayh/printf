/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay < hatalay@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:56:16 by hatalay           #+#    #+#             */
/*   Updated: 2023/02/01 22:59:08 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		*count += write(1, "(null)", 6);
	}
	else
	{
		while (s[i])
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
	if (n < 10)
		ft_putchar(n + 48, count);
}

void	ft_hexadecimal_convert(unsigned int a, int *count)
{
	char	*hex_chars;

	hex_chars = "0123456789abcdef";
	if (a >= 16)
	{
		ft_hexadecimal_convert(a / 16, count);
		ft_hexadecimal_convert(a % 16, count);
	}
	else
	{
		ft_putchar(hex_chars[a], count);
	}
}

void	ft_hexadecimal_upconvert(unsigned int a, int *count)
{
	char	*hex_chars;

	hex_chars = "0123456789ABCDEF";
	if (a >= 16)
	{
		ft_hexadecimal_upconvert(a / 16, count);
		ft_hexadecimal_upconvert(a % 16, count);
	}
	else
	{
		ft_putchar(hex_chars[a], count);
	}
}
