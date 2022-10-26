/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:56:07 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/26 07:10:38 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr_fd(char *s, int print)
{
	int	x;

	x = 0;
	while (s[x])
	{
		print = ft_putchar(s[x], print);
		x++;
	}
	return (print);
}
