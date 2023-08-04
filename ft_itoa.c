/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:46:02 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/03 17:46:04 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	strrev(char *str);

char	*ft_itoa(int n)
{
	char	*result;
	int		result_index;
	int		negative;
	int		digit;

	result = (char *)malloc(sizeof(char) * 12);
	if (!result)
		return (NULL);
	result_index = 0;
	negative = n < 0;
	if (negative)
		result[result_index++] = '-';
	while (n)
	{
		digit = n % 10;
		if (digit < 0)
			digit *= -1;
		result[result_index++] = digit + '0';
		n /= 10;
	}
	if (!result_index)
		result[result_index++] = '0';
	result[result_index] = '\0';
	strrev(result + negative);
	return (result);
}

static	void	strrev(char *str)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i++;
		j--;
	}
}
