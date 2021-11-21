/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:46:38 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/21 16:15:32 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flag_x(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	return (ft_putnbr_hxd(c, "0123456789abcdef", 1));
}

int	flag_xup(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	return (ft_putnbr_hxd(c, "0123456789ABCDEF", 1));
}

int	flag_u(va_list ap)
{
	unsigned int	c;

	c = va_arg(ap, unsigned int);
	ft_putnbr_unsint(c, 1);
	return (ft_counter_unsint(c));
}

int	flag_i(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	ft_putnbr_fd(c, 1);
	return (ft_counter(c));
}

int	flag_d(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	ft_putnbr_fd(c, 1);
	return (ft_counter(c));
}
