/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:07:22 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/19 10:52:51 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

ssize_t	ft_putnbr_base(long int nbr, char *base, int fd)
{
	char	*nbr_base;
	ssize_t	bytes;

	nbr_base = ft_itoa_base(nbr, base);
	if (!nbr_base)
		return (ft_putstr_fd(NULL, fd));
	bytes = ft_putstr_fd(nbr_base, fd);
	free(nbr_base);
	return (bytes);
}
