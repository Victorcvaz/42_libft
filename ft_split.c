/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:20 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/03 21:33:14 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		fill_result(char **result, char const *s, char c);
static	void		free_result(char **result, int result_index);
static	char		*allocate_substring(char const *s, int sep_nbr, int last_i);

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*s2;
	size_t	sep_nbr;
	int		i;

	i = -1;
	sep_nbr = 0;
	while (s[++i])
	{
		if (s[i] == c && s[i + 1])
			sep_nbr++;
	}
	if (!s || !sep_nbr || sep_nbr == ft_strlen(s))
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (sep_nbr + 2));
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
	while (s[++last_i])
	{
		if (s[last_i + 1] == '\0' || s[last_i] == c)
		{
			while (s[last_i] == c && s[last_i] != '\0')
				last_i++;
			result[++res_i] = allocate_substring(s, curr_i, last_i);
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

static	char	*allocate_substring(char const *s, int curr_i, int last_i)
{
	char	*substring;
	size_t	i;
	size_t	substr_len;

	i = 0;
	substr_len = last_i - curr_i;
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
	while (++i < result_index)
		free(result[i]);
	free(result);
}
