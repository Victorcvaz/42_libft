/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:54:00 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/09 00:59:02 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	str_len;
	char	*str;

	str_len = ft_strlen(s);
	str = (char *)s;
	if ((char) c == '\0')
		return (str + str_len);
	while (str_len > 0)
	{
		str_len--;
		if (str[str_len] == (char) c)
			return (str + str_len);
	}
	return (NULL);
}
