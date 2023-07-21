/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:25:11 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/20 20:35:23 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("ft_isalpha result: %d | isalpha result: %d\n", ft_isalpha('m'), isalpha('m'));
	printf("ft_isalpha result: %d | isalpha result: %d\n", ft_isalpha('0'), isalpha('0'));
	printf("ft_isalpha result: %d | isalpha result: %d\n", ft_isalpha('\0'), isalpha('\0'));
}
