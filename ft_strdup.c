// lacking header.

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = -1;
	str = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[++i] != '\0')
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
