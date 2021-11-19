/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:35:16 by zihirri           #+#    #+#             */
/*   Updated: 2021/11/19 18:03:47 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
int ft_putnbr_hxd(long int num, char *base, int fd)
{
    long int	n;
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
	while(n)
	{
		result[i] = base[n % 16];
		n /= 16;
        i++;
	}
	result[i] = '\0';
	reslen = strlen(result) - 1;
	while (reslen > 0){
		ft_putchar_fd(result[reslen],fd);
        reslen--;}
	return (strlen(result));
}

int main(void)
{
	char	*base = "0123456789ABCDEF";
	long n = -150;
	int fd = 1;
    printf("%X\n", n);
	ft_putnbr_hxd(n,base,fd);
}