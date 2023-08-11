/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:46:02 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/11 00:12:30 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n);
static void	strrev(char *str);
static void	ft_itoa_aux(int n, char *result, int result_index);

char	*ft_itoa(int n)
{
	char	*result;
	int		result_index;
	int		negative;

	result = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (!result)
		return (NULL);
	result_index = 0;
	negative = n < 0;
	if (negative)
		result[result_index++] = '-';
	ft_itoa_aux(n, result, result_index);
	strrev(result + negative);
	return (result);
}

static void	ft_itoa_aux(int n, char *result, int result_index)
{
	long	ln;
	int		digit;

	ln = (long) n;
	while (ln)
	{
		digit = ln % 10;
		if (digit < 0)
			digit *= -1;
		result[result_index++] = digit + '0';
		ln /= 10;
	}
	if (!result_index)
		result[result_index++] = '0';
	result[result_index] = '\0';
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

static int	ft_nbrlen(int n)
{
	int		len;
	long	ln;

	if (n == 0)
		return (1);
	len = 0;
	ln = (long)n;
	if (ln < 0)
	{
		ln = -ln;
		len++;
	}
	while (ln > 0)
	{
		ln /= 10;
		len++;
	}
	return (len);
}
