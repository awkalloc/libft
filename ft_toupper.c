#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%c\n", (char)ft_toupper(av[1][0]));
// 	return (0);
// }