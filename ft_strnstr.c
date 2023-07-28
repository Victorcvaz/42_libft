// lacking header.

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	h_index;
	size_t	n_index;

	h_index = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h_index] != '\0' && h_index < n)
	{
		n_index = 0;
		while (needle[n_index] == haystack[h_index + n_index]
			&& h_index + n_index < n)
		{
			if (needle[n_index + 1] == '\0')
				return ((char *)&haystack[h_index]);
			n_index++;
		}
		h_index++;
	}
	return (NULL);
}
