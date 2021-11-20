/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:40:55 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 16:04:22 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdint.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "../libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_counter(int num);
int	ft_counter_unsint(unsigned int num);
int	ft_putnbr_hxd(long int num, chqr *base, int fd);
int	ft_putnbr_hxd_ad(uintptr_t num, char *base, int fd);
int	ft_putnbr_unsint(unsigned int num, int fd);
int	ft_print_character(va_list ap);
int	ft_print_pourcentage(void);
int	ft_print_string(va_list ap);
int	ft_parse(char flag, va_list ap);
int	flag_x(va_list ap);
int	flag_X(va_list ap);
int	flag_u(va_list ap);
int	flag_i(va_list ap);
int	flag_d(va_list ap);
int	flag_p(va_list ap);
#endif
