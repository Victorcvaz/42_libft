/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:04 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/08/16 07:34:36 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*result;

	result = ft_itoa(n);
	if (!result)
	{
		ft_putstr_fd("Error: Failed to allocate memory\n", fd);
		return ;
	}
	ft_putstr_fd(result, fd);
	free(result);
}
