#include "libft.h"

int	ft_isascii(int c)
{
	unsigned int	u;

	u = (unsigned int)c;
	if (u <= 127)
		return (1);
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_isascii(av[1][0]));
// 	return (0);
// }