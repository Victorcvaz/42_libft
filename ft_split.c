// lacking header.

#include "libft.h"

static	int		fill_result(char **result, char const *s, char c);
static	char	*allocate_substring(char const *s, int sep_nbr, int last_index);
static	void	free_result(char **result, int result_index);
static	int		count_separators(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		sep_nbr;

	sep_nbr = count_separators(s, c);
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (sep_nbr + 2));
	if (!result)
		return (NULL);
	if (!sep_nbr)
	{
		result[0] = (char *)malloc(sizeof(char));
		if (!result[0])
		{
			free(result);
			return (NULL);
		}
		result[0][0] = '\0';
		result[1] = NULL;
	}
	else
		if (!fill_result(result, s, c))
			return (NULL);
	return (result);
}

static	int	fill_result(char **result, char const *s, char c)
{
	int	result_index;
	int	last_index;
	int	current_index;

	result_index = -1;
	last_index = -1;
	current_index = 0;
	while (s[++last_index])
	{
		if (s[last_index] == c || s[last_index + 1] == '\0')
		{
			result[++result_index] = allocate_substring(s, current_index, last_index);
			if (!result[result_index])
			{
				free_result(result, result_index);
				return (0);
			}
			current_index = last_index + 1;
		}
	}
	return (1);
}

static char *allocate_substring(char const *s, int current_index, int last_index)
{
	size_t	i;
	char	*substring; 
	size_t	substr_len;
	
	i = 0;
	substr_len = last_index - current_index;
	substring = (char *)malloc(sizeof(char) * (substr_len + NULL_BYTE));
	if (!substring)
		return (NULL);
	while (i < substr_len)
		substring[i++] = s[current_index++];
	substring[substr_len] = '\0';
	return (substring);
}

static void free_result(char **result, int result_index)
{
	int	i;
	
	i = -1;
	while (++i < result_index)
		free(result[i]);
	free(result);
}

static int count_separators(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
		if (*s++ == c)
			count++;
	return (count);
}
