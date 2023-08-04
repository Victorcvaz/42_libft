/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:29 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/03 17:53:30 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_index;

	src_index = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[src_index] != '\0' && src_index < size - 1)
	{
		dest[src_index] = src[src_index];
		src_index++;
	}
	dest[src_index] = '\0';
	return (ft_strlen(src));
}
