/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 01:26:43 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/24 07:07:29 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char *, ...);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_base(int fd, int base, int number);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
int		ft_putchar(char c, int print);
int		ft_helper(char c, void *arg, int print);
#endif