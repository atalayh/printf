/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hatalay < hatalay@student.42istanbul.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:05:30 by hatalay           #+#    #+#             */
/*   Updated: 2023/02/01 23:12:40 by hatalay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *percent, ...);
void	ft_putchar(char a, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void	ft_percent_p(unsigned long long a, int *count);
void	ft_hexadecimal_nbr(int a, int *count);
void	ft_hexadecimal_convert(unsigned int a, int *count);
void	ft_hexadecimal_upconvert(unsigned int a, int *count);
void	ft_percent_u(unsigned int n, int *count);

#endif
