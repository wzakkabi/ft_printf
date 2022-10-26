/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:21:10 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/26 07:10:17 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, int print)
{
	if (n == -2147483648)
		print = ft_putstr_fd("-2147483648", print);
	else
	{
		if (n < 0)
		{
			print = ft_putchar('-', print);
			n = n * -1;
		}
		if (n > 9)
		{
			print = ft_putnbr(n / 10, print);
		}
		print = ft_putchar((n % 10) + '0', print);
	}
	return (print);
}
