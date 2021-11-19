/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:19:09 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 20:31:04 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<printf.h>

int	ft_parse(char flag, va_list ap)
{
	int	c;

	if (flag == '%')
		c = ft_print_pourcentage();
	else if (flag == 'c')
		c = ft_print_character(ap);
	else if (flag == 's')
		c = ft_print_string(ap);
	else if (flag == 'x')
		c = flag_x(ap);
	else if (flag == 'X')
		c = flag_X(ap);
	else if (flag == 'd')
		c = flag_d(ap);
	else if (flag == 'u')
		c = flag_u(ap);
	else if (flag == 'i')
		c = flag_i(ap);
	else if (flag == 'p')
		c = flag_p(ap);
	return (c);
}
