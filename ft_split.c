/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:20 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/04 23:28:30 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		fill_result(char **result, char const *s, char c);
static	void		free_result(char **result, int result_index);
static	char		*allocate_substring(char const *s, int matriz_i, int last_i, char c);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	matriz_i;
	int		i;

	i = 0;
	matriz_i = 0;
	while (s[i] == c)
		i++;
	while (s[i++])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			matriz_i++;
	}
	if (!s || !matriz_i)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * matriz_i + 1);
	if (!result)
		return (NULL);
	if (!fill_result(result, s, c))
		return (NULL);
	return (result);
}

static	int	fill_result(char **result, char const *s, char c)
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
		if ((s[last_i] == c && s[last_i + 1] != c) 
			|| (s[last_i] != c && s[last_i + 1] == '\0'))
		{
			result[++res_i] = allocate_substring(s, curr_i , last_i, c);
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

static	char	*allocate_substring(char const *s, int curr_i, int last_i, char c)
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
