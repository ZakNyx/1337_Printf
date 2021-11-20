
#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	len;
	int	counter;
	int	counter_spe;

	va_start(ap, format)
	len = 0;
	counter = 0;
	counter_spe = 0;
	while (format[len])
	{
		if (format[len] == '%')
		{
			counter_spe += ft_parse(format[i + 1], ap);
			len++;
		}
		else
		{
			write(1, &(format[len]), 1);
			counter++;
		}
		len++;
	}
	va_end(ap);
	return (count + counter_spe);
}
