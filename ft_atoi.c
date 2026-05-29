#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	i;
	int	neg;

	nb = 0;
	i = 0;
	neg = 1;
	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - 48);
		i++;
	}
	return (nb * neg);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_atoi(av[1]));
// 	return (0);
// }