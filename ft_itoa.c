#include "libft.h"

static int	ft_count_digit(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{	
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	nb = n;
	len = ft_count_digit(nb);
	res = malloc(sizeof(char) * (1 + len));
	if (!res)
		return (NULL);
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		res[0] = '0';
	res[len] = '\0';
	while (nb)
	{
		res[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	return (res);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_itoa(atoi(av[1])));
// 	return (0);
// }