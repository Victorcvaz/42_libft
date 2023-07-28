// lacking header.

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_index;
	size_t	src_index;

	dst_index = ft_strlen(dst);
	src_index = 0;
	while (src[src_index] != '\0' && (dst_index + src_index + 1) < size - 1)
	{
		dst[dst_index + src_index] = src[src_index];
		src_index++;
	}
	if (dst_index < size)
		dst[dst_index + src_index] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
