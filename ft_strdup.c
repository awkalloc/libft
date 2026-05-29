#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (1 + ft_strlen(str)));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Source str: %s; Duplicated str: %s;\n", av[1], ft_strdup(av[1]));
// 	return (0);
// }