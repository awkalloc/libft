#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%c\n", (char)ft_tolower(av[1][0]));
// 	return (0);
// }