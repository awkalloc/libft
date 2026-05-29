#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	if (src == NULL)
		return ((size_t) NULL);
	i = 0;
	if (size == 0)
		return (srclen);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("Before ft_strlcpy: Dest = %s; Src = %s\n", av[1], av[2]);
// 		ft_strlcpy(av[1], av[2], atoi(av[3]));
// 		printf("After ft_strlcpy: Dest = %s\n", av[1]);
// 	}
// 	return (0);
// }