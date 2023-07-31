#include "libft.h"
#include <stdio.h>
int main(void)
{
	char *str = "Hello World!";
	char *ptr = ft_substr(str, 5, 6);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
