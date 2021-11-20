/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:19:05 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 16:26:17 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

int	ft_print_character(va_list ap)
{
	char	tempo;

	tempo = va_arg(ap, int);
	ft_putchar_fd(tempo, 1);
	return (1);
}

int	ft_print_pourcentage(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	ft_print_string(va_list ap)
{
	char	*tempo;
	int		i;

	tempo = va_arg(ap, char *);
	if (tempo == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	else
	{
		ft_putstr_fd(tempo, 1);
		i = ft_strlen(tempo);
	}
	return (i);
}
