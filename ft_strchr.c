/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:20:28 by wzakkabi          #+#    #+#             */
/*   Updated: 2024/04/20 19:53:31 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr(char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == c)
			return (1);
		x++;
	}
	return (0);
}