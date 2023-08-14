/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:22 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/14 02:40:07 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_index;

	if (!dst || !src)
		return (0);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (ft_strlen(src) + size);
	src_index = 0;
	while (src[src_index] != '\0' && src_index + dst_len + 1 < size)
	{
		dst[dst_len + src_index] = src[src_index];
		src_index++;
	}
	dst[dst_len + src_index] = '\0';
	return (ft_strlen(src) + dst_len);
}
