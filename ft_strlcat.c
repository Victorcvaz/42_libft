/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:22 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/03 18:44:21 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_index;

	dst_len = ft_strlen(dst);
	src_index = 0;
	while (src[src_index] != '\0' && src_index + dst_len + 1 < size)
	{
		dst[dst_len + src_index] = src[src_index];
		src_index++;
	}
	dst[dst_len + src_index] = '\0';
	if (size > dst_len)
		return (ft_strlen(src) + dst_len);
	return (size + ft_strlen(src));
}
