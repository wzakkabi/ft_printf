/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:57:02 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/27 00:05:22 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long base, unsigned long number, char c, int print)
{
	char	*p;

	if (c == 'X')
		p = "0123456789ABCDEF";
	else
		p = "0123456789abcdef";
	if (number < 0)
	{
		number *= -1;
		print = ft_putchar('-', print);
	}
	if (number >= base)
	{
		print = ft_putnbr_base(base, (number / base), c, print);
	}
	print = ft_putchar(p[number % base], print);
	return (print);
}
