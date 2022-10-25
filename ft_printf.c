/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:25:36 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/24 07:17:57 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *walid, ...)
{
	va_list arg;
	int print = 0;
	int x;
	char oups;
	const char *p = walid;
	va_start(arg, walid);
	while(p[x])
	{
		if(p[x] == '%')
		{
			if(p[x + 1] == '%')
				{
				ft_putchar('%', 1);
				print++;
				x++;
				}
			else
			{
				if ( ft_strchr("cspdiuxX", p[x + 1] ))
				{
					p = va_arg(arg, walid);
					print = ft_helper(oups, arg, print);
					x++;
				}
			}
		}
		ft_putchar(p[x], 1);
		print++;
		x++;
	}
}