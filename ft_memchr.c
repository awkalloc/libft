#include "libft.h"

void	*ft_memchr(const void *buffer, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)buffer;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("Destination pointer: %s\n", (char *)ft_memchr("bonjour", 'u', 10));
// }