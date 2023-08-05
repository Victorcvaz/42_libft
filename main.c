#include "libft.h"
#include <stdio.h>

int main()
{
	char **result;
	char **result2;
	char *str = "Hello,,World";
	result = ft_split(str, ',');
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("\n");
	char *str2 = ",,,HelloWorld,";
	result2 = ft_split(str2, ',');
	// printf("%s\n", result2[0]);
	// printf("%s\n", result2[1]);
	return (0);
}
