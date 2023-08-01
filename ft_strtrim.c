// lacking header.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	s1_len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	while (start < s1_len && ft_strchr(set, s1[start]))
		start++;
	end = s1_len;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	ptr = (char *) malloc(sizeof(char) * (end - start + NULL_BYTE));
	if (!ptr)
		return (NULL);
	ptr = ft_substr(s1, start, end - start + NULL_BYTE);
	return (ptr);
}
