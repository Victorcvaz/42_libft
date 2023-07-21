/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:30:39 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/20 23:43:47 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("ft_toupper('z') result: %d | toupper('z') result: %d\n", ft_toupper('z'), toupper('z'));
	printf("ft_toupper('5') result: %d | ft_toupper('5') result: %d\n", ft_toupper('5'), toupper('5'));
	printf("ft_toupper('A') result: %d | ft_toupper('A') result: %d\n", ft_toupper('A'), toupper('A'));
}
