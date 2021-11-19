/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:19:09 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 20:12:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<printf.h>

int ft_parse(char flag, va_list ap)
{
	int	c;

	if (flag == '%')
		c = ft_print_pourcentage();
	else if (flag == 'c')
		c = ft_print_character(ap);
	else if (flag == 's')
		c = ft_print_string(ap);
	return (c);
}
