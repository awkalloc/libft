#include "libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	len = 0;
	while (str[i])
		len += ft_putchar(str[i++]);
	return (len);
}

int	ft_putnbr(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = (long)n;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + 48);
	return (len);
}

int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + 48);
	return (len);
}
