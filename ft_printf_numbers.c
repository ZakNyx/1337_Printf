
#include "printf.h"

int	flag_x(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	return (ft_putnbr_hxd(c,"123456789abcdef", 1);
}

int	flag_X(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	return (ft_putnbr_hxd(c,"123456789ABCDEF", 1);
}

int	flag_u(va_list ap)
{
	unsigned int	c;

	c = va_arg(c, unsigned int);
	ft_putnbr_unsint(ap, 1);
	return (ft_counter_unsint(c));
}

int	flag_i(va_list ap)
{
	int	c;

	c = va_arg(c, int);
	ft_putnbr_fd(ap, 1);
	return (ft_counter((c));
}

int	flag_d(va_list ap)
{
	int	c;

	c = va_arg(ap, int);
	ft_putnbr_fd(c, 1);
	return (ft_counter(c));
}
