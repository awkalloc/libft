#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*mem;
	size_t	total;

	total = size * number;
	if (!total)
	{
		mem = malloc(0);
		if (!mem)
			return (NULL);
		return (mem);
	}
	else if (total / size != number)
		return (NULL);
	mem = malloc(total);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("Pointer before calloc: %s\nPointer after calloc: %s\n", 
// av[1], (char *)ft_calloc(av[1]))
// }
