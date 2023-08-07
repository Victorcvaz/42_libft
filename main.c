#include "./libft/libft.h"
#include <stdio.h>

int main(void)
{
    char const *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
    char c = ' ';
    
    char **result = ft_split(str, c);
    if (result)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    
    return 0;
}
