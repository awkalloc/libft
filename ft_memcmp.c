#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}	
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 		printf("%d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
// 	return (0);
// }