#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i])
	{
		if (ptr[i] == c % 256)
			return ((char *)(ptr + i));
		i++;
	}
	if (c % 256 == '\0')
		return ((char *)(ptr + i));
	return (NULL);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("%s\n", ft_strchr(av[1], av[2][0]));
// 	return (0);
// }