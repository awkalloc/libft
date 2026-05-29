#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strmapi;
	int		i;

	if (!s || !f)
		return (NULL);
	strmapi = malloc(sizeof(char) * (1 + ft_strlen(s)));
	if (!strmapi || !s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		strmapi[i] = (*f)(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}

// char ft_test(unsigned int n, char c)
// {
// 	(void)n;
// 	return(c + 32);
// }
// 
// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("%s\n", ft_strmapi(av[1], &ft_test));
// 	return (0);
// }
