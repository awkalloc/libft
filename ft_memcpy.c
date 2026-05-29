#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destptr;
	const unsigned char	*srcptr;

	destptr = (unsigned char *)dest;
	srcptr = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	buffer[10];

// 	printf("Source pointer: %s\n", "bonjour :D");
// 	ft_memcpy(buffer, "bonjour :D", 10);
// 	printf("Destination pointer: %s\n", buffer);
// }