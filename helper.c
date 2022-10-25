/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:06:02 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/24 07:07:02 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int		ft_helper(char c, void *arg, int print)
{
	if(c == 'd')
	{

	}
	else if(c == 'p')
	{

	}
	else if(c == 'i')
	{

	}
	else if(c == 'u')
	{

	}
	else if(c == 'x' || c == 'X')
	{
		ft_putnbr_base(16,(int)arg, printf);
	}
	else if(c == 's')
	{

	}
	else if(c == 'c')
	{

	}


	return print;
}
