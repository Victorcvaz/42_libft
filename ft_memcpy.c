/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:46:30 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/03 17:46:32 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			index;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dest_ptr[index] = src_ptr[index];
		index++;
	}
	return (dest);
}
