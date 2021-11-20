/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_address.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:46:59 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/20 19:47:00 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hxd_ad(uintptr_t num, char *base, int fd)
{
	int	i;
	int	reslen;
	char	result[100];

	i = 1;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	}
	while (num)
	{
		result[i++] = base[num % 16];
		 num = num / 16;
	}
	result[i] = '\0';
	reslen = ft_strlen(result) - 1;
	while (reslen > 0)
		ft_putchar_fd(result[reslen--], fd);
	return (ft_strlen(result));	
}

int	flag_p(va_list ap)
{
	void	*tempo;

	tempo = va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	return (ft_putnbr_hxd_ad((uintptr_t)tempo, "0123456789abcdef", 1) + 2);
}
