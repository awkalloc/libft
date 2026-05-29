#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(sub) == 0)
		return ((char *)str);
	if (!len)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (sub[j] && i + j < len)
		{
			if (str[i + j] == sub[j])
			{
				if (sub[j + 1] == '\0')
					return ((char *)(str + i));
			}
			else
				break ;
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
// 	}
// 	return (0);
// }