#include "libft.h"

int	ft_puthex(unsigned long n, int b)
{
	int		len;
	char	*hexlow;
	char	*hexup;

	len = 0;
	hexlow = "0123456789abcdef";
	hexup = "0123456789ABCDEF";
	if (b)
	{
		if (n > 15)
			len += ft_puthex(n / 16, 1);
	len += ft_putchar(hexup[n % 16]);
	}
	else
	{
		if (n > 15)
			len += ft_puthex(n / 16, 0);
		len += ft_putchar(hexlow[n % 16]);
	}
	return (len);
}

int	ft_ptradd(unsigned long n)
{
	int	len;

	len = 0;
	if (!n)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthex(n, 0);
	return (len);
}
