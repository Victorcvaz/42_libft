// lacking header.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	ptr = (char *) malloc(sizeof(char) * len + NULL_BYTE);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + NULL_BYTE);
	return (ptr);
}
