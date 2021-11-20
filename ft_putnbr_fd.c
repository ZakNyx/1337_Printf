/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_recursive.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:58:16 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/10 15:11:05 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	t;

	t = (long)nb;
	if (t < 0)
	{
		ft_putchar_fd('-', fd);
		t *= -1;
	}
	if (t >= 10)
	{
		ft_putnbr_fd(t / 10, fd);
		ft_putnbr_fd(t % 10, fd);
	}
	else if (t >= 0)
	{
		ft_putchar_fd(t + 48, fd);
	}
}
