/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 03:56:07 by wzakkabi          #+#    #+#             */
/*   Updated: 2024/04/20 19:53:34 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int print)
{
	int	x;

	x = 0;
	if (s == NULL)
		return (ft_putstr_fd("(null)", print));
	while (s[x])
	{
		print = ft_putchar(s[x], print);
		x++;
	}
	return (print);
}