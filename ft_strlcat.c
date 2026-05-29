#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	if (!dest && !size)
		return (size);
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if ((size == 0) || (size <= destlen))
		return (srclen + size);
	i = 0;
	while (src[i] && i < size - destlen -1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("Before ft_strlcpy: Dest = %s; Src = %s\n", av[1], av[2]);
// 		ft_strlcat(av[1], av[2], atoi(av[3]));
// 		printf("After ft_strlcpy: Dest = %s\n", av[1]);
// 	}
// 	return (0);
// }