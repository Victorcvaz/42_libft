/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:53:16 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/03 17:53:17 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char *) malloc(sizeof(char) * (s1_len + s2_len + NULL_BYTE));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + NULL_BYTE);
	ft_strlcat(ptr, s2, s1_len + s2_len + NULL_BYTE);
	return (ptr);
}
