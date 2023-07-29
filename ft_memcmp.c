// lacking header.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && (ptr1[i] == ptr2[i]) && ptr1[i] && ptr2[i])
		i++;
	return (ptr1[i] - ptr2[i]);
}
