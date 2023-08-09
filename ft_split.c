/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:20 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/08 23:12:08 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_result(char **result, int result_index);
static	int	fill_result(char **result, char const *s, char c, int matriz_i);
static int	count_words(const char *str, char c);
static int	allocate_substring(char **result, int matriz_i, int word_len);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	matriz_i;

	if (!s)
		return (NULL);
	matriz_i = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * matriz_i + 1);
	if (!result)
		return (NULL);
	if (!fill_result(result, s, c, matriz_i))
		return (NULL);
	return (result);
}

static	int	fill_result(char **result, char const *s, char c, int matriz_i)
{
	int	res_i;
	int	curr_i;
	int	word_len;

	res_i = 0;
	curr_i = -1;
	while (s[++curr_i])
	{
		word_len = 0;
		while (s[curr_i] == c && s[curr_i])
			curr_i++;
		while (s[curr_i + word_len] != c && s[curr_i + word_len])
			word_len++;
		if (!allocate_substring(result, res_i, word_len))
			return (0);
		ft_strlcat(result[res_i], s + curr_i, word_len + 1);
		if (matriz_i == res_i)
			break ;
		res_i++;
		curr_i += word_len;
	}
	result[res_i] = NULL;
	return (1);
}

static int	allocate_substring(char **result, int matriz_i, int word_len)
{
	result[matriz_i] = (char *)malloc(sizeof(char) * word_len + 1);
	if (!result[matriz_i])
	{
		free_result(result, matriz_i);
		return (0);
	}
	return (1);
}

static	void	free_result(char **result, int result_index)
{
	int	i;

	i = 0;
	while (i++ <= result_index)
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
