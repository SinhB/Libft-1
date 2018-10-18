#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)(dst) + i) = *((char *) (src) + i);
		if ( ((unsigned char) (c)) == *((unsigned char*) (src) + i))
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
