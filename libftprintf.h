/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:26:43 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/26 07:19:31 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *p, ...);
int	ft_putstr_fd(char *s, int print);
int	ft_putnbr_base(unsigned long base, unsigned long number, char c, int print);
int	ft_strchr(char *s, int c);
int	ft_putchar(char c, int print);
int	ft_helper(char c, va_list arg, int print);
int	ft_putnbr(int n, int print);
#endif