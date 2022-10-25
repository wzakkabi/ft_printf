/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:57:02 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/24 06:47:00 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int	ft_putnbr_base(int base, int number, int print, char c)
{
	char *p = "0123456789abcdef";
	if(number > 0)
	{
		number *= -1;
		print = ft_putchar('-', print);
	}
	if(number > base)
	{
		ft_putnbr_base(base, (number / 10), print, c);
	}
	print = ft_putchar(p[number % 10], print);
	return print;
}