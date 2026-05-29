#include "libft.h"

static int	ft_is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_first(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_is_set(s1[i], set))
		i++;
	return (i);
}

static size_t	ft_last(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_is_set(s1[ft_strlen(s1) - 1 - i], set))
		i++;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	k;
	size_t	diff;
	char	*trim;

	k = 0;
	if (!s1)
		return (NULL);
	if (ft_first(s1, set) == ft_strlen(s1))
	{
		trim = malloc(1);
		trim[0] = '\0';
		return (trim);
	}
	diff = ft_last(s1, set) + ft_first(s1, set);
	trim = ft_calloc(sizeof(char), ft_strlen(s1) - diff + 1);
	if (!trim)
		return (NULL);
	while (k < ft_strlen(s1) - diff)
	{
		trim[k] = s1[ft_first(s1, set) + k];
		k++;
	}
	trim[k] = '\0';
	return (trim);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		printf("%s\n", ft_strtrim(av[1], av[2]));
// 	}
// 	return (0);
// }