#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle == 0)
		return ((char *)(haystack));
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j ] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
			i += j;
		}
	}
	return (0);
}
