/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:25:36 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/26 07:08:21 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *p, ...)
{
	va_list	arg;
	int		print;
	int		x;

	print = 0;
	x = 0;
	va_start (arg, p);
	while (p[x])
	{
		if (p[x] == '%')
		{
			x++;
			if (p[x] == '%')
				print = ft_putchar('%', print);
			else
				print = ft_helper(p[x], arg, print);
		}
		else
			print = ft_putchar(p[x], print);
		x++;
	}
	return (print);
}
