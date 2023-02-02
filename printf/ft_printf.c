/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay < hatalay@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:38:16 by hatalay           #+#    #+#             */
/*   Updated: 2023/02/02 16:31:26 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char a, int *count)
{
	*count += write(1, &a, 1);
}

void	ft_check_percent(va_list *ag, char format, int *count)
{
	if (format == 'c')
		ft_putchar(va_arg(*ag, int), count);
	else if (format == '%')
		ft_putchar('%', count);
	else if (format == 's')
		ft_putstr(va_arg(*ag, char *), count);
	else if (format == 'd')
		ft_putnbr(va_arg(*ag, int), count);
	else if (format == 'i')
		ft_putnbr(va_arg(*ag, int), count);
	else if (format == 'p')
	{
		ft_putstr("0x", count);
		ft_percent_p(va_arg(*ag, unsigned long long), count);
	}
	else if (format == 'x')
		ft_hexadecimal_convert(va_arg(*ag, unsigned int), count);
	else if (format == 'X')
		ft_hexadecimal_upconvert(va_arg(*ag, unsigned int), count);
	else if (format == 'u')
		ft_percent_u(va_arg(*ag, unsigned int), count);
}

int	ft_printf(const char *s, ...)
{
	va_list	ag;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(ag, s);
	while (s && s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			ft_check_percent(&ag, s[++i], &count);
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(ag);
	return (count);
}

int main()
{
	char *s;
	s = "sdfsdf";
	ft_printf("%d",ft_printf("%s",s));
}
