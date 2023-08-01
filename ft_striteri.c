// lacking header.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	index = -1;
	if (!s || !f)
		return ;
	while (s[++index])
		f(index, &s[index]);
}
