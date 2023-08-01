#include "libft.h"
#include <stdio.h>

int main()
{
	char **result;
	result = ft_split("aomeuver, isso, pode, estar, certo, ?", ',');
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	return (0);
}
