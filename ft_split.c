/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:20 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/07 20:19:31 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_result(char **result, int result_index);
static	int	fill_result(char **result, char const *s, char c, int matriz_i);
static int	count_words(const char *str, char c);
static	char	*allocate_substr(char const *s, int curr_i, int last_i, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	matriz_i;
	int		i;

	i = 0;
	matriz_i = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * matriz_i + 1);
	if (!result && *s == '\0')
		return (NULL);
	if (!matriz_i && *s)
		result[0] = (char *)s;
	else if (!matriz_i)
		result[0] = "\0";
	else if (!fill_result(result, s, c, matriz_i))
		return (NULL);
	return (result);
}

static	int	fill_result(char **result, char const *s, char c, int matriz_i)
{
	int	res_i;
	int	last_i;
	int	curr_i;

	res_i = -1;
	last_i = -1;
	curr_i = 0;
	while (s[++last_i] == c)
		curr_i++;
	while (s[last_i++])
	{
		if ((s[last_i] == c && s[last_i + 1] != c && s[last_i + 1] != '\0')
			|| (matriz_i != res_i + 2 && s[last_i + 1] == '\0'))
		{
			result[++res_i] = allocate_substr(s, curr_i, last_i, c);
			if (!result[res_i])
			{
				free_result(result, res_i);
				return (0);
			}
			curr_i = last_i + 1;
		}
	}
	return (1);
}

static	char	*allocate_substr(char const *s, int curr_i, int last_i, char c)
{
	char	*substring;
	size_t	i;
	size_t	substr_len;

	i = 0;
	while (s[last_i] == c)
		last_i--;
	substr_len = last_i - curr_i + 1;
	substring = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!substring)
		return (NULL);
	while (i < substr_len)
		substring[i++] = s[curr_i++];
	substring[substr_len] = '\0';
	return (substring);
}

static	void	free_result(char **result, int result_index)
{
	int	i;

	i = -1;
	while (++i <= result_index)
		free(result[i]);
	free(result);
}

static int	count_words(const char *s, char c)
{
	int		i;
	int		trigger;
	char	*str;

	i = 0;
	trigger = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}
