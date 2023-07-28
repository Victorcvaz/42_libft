// lacking header.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_index;

	src_index = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[src_index] != '\0' && src_index < size - 1)
	{
		dest[src_index] = src[src_index];
		src_index++;
	}
	dest[src_index] = '\0';
	return (ft_strlen(src));
}
