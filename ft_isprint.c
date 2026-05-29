#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%d\n", ft_isprint(av[1][0]));
// 	return (0);
// }