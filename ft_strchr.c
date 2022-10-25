/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:20:28 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/24 07:08:58 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	if(c == NULL)
		return 0;
	while (s[x])
	{
		if ((unsigned char)s[x] == (unsigned char)c)
			return s[x];
		x++;
	}
	return (NULL);
}