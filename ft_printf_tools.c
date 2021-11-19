/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:35:16 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 20:19:25 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_counter(int num)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		counter++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

int	ft_counter_unsint(unsigned int num)
{
	long	counter;

	counter = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

int	ft_putnbr_hxd(long int num, char *base, int fd)
{
	long		n;
	int			i;
	int			reslen;
	char		result[100];

	i = 1;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	}
	if (num > 0)
		n = (long)num;
	if (num < 0)
		n = (unsigned int)num;
	while (n)
	{
		result[i++] = base[n % 16];
		n /= 16;
	}
	result[i] = '\0';
	reslen = ft_strlen(result) - 1;
	while (reslen > 0)
		ft_putchar_fd(result[reslen--], fd);
	return (ft_strlen(result));
}
