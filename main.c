#include "libft.h"
#include <stdio.h>

int main()
{
	char *str = "Hello World!";
	char *ptr = ft_strjoin(str, " Goodbye World!!");
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}
