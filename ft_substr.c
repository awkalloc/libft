#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	sublen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen || len == 0)
		return (ft_strdup(""));
	if (slen - start >= len)
		sublen = len;
	else
		sublen = slen - start;
	substr = malloc(sizeof(char) * (sublen + 1));
	if (!s || !substr)
		return (NULL);
	i = 0;
	while (s[start] && i < sublen)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// }
// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
// 	}
// 	return (0);
// }