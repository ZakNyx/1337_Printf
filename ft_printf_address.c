
#include "printf.h"

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
	while (n)
	{
		result[i++] = base[num % 16];
		 num = num / 16;
	}
	result[i] = '\0';
	reslen = ft_strlen(result) - 1;
	while (reslen > 0)
		ft_putchar_fd(result[relen--], fd);
	return (ft_strlen(result));	
}

int	flag_p(va_list ap)
{
	void	*tempo;

	tempo = va_arg(pa, void *);
	ft_putstr_fd("0x", 1);
	return (ft_putnrb_hxd_p((uintptr_t)tempo, "123456789abcdef", 1) + 2);
}
