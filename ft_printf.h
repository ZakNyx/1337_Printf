/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:40:55 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/21 16:24:46 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_counter(int num);
int		ft_counter_unsint(unsigned int num);
int		ft_putnbr_hxd(long int num, char *base, int fd);
int		ft_putnbr_hxd_ad(uintptr_t num, char *base, int fd);
int		ft_putnbr_unsint(unsigned int num, int fd);
int		ft_print_character(va_list ap);
int		ft_print_pourcentage(void);
int		ft_print_string(va_list ap);
size_t	ft_strlen(const char *str);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
int		flag_x(va_list ap);
int		flag_xup(va_list ap);
int		flag_u(va_list ap);
int		flag_i(va_list ap);
int		flag_d(va_list ap);
int		flag_p(va_list ap);
int		ft_parse(char flag, va_list ap);
#endif
