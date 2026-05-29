#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	char		*ptr;

	i = 0;
	ptr = NULL;
	while (str[i])
	{
		if (str[i] == c % 256)
			ptr = (char *)(str + i);
		i++;
	}
	if (c % 256 == '\0')
		return ((char *)(str + i));
	return (ptr);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("%s\n", ft_strrchr(av[1], av[2][0]));
// 	return (0);
// }