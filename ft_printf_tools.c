/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:35:16 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 20:30:36 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_counter(int num)
{
	int	counter;

	counter = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		counter++;
		num = -num;
	}
	while (num != 0)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

int	ft_counter_unsint(unsigned int num)
{
	long	counter;

	counter = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
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
		n = (long int)num;
	else
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

int	ft_putnbr_unsint(unsigned int num, int fd)
{
	static int	counter;

	counter = 0;
	if (num <= 9)
	{
		ft_putchar_fd((num + '0'), fd);
		counter++;
	}
	else
	{
		ft_putnbr_unsint((num / 10), fd);
		ft_putnbr_unsint((num % 10), fd);
	}
	return (counter);
}
