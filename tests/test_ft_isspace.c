/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:05:23 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/20 21:17:12 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("ft_isspace result: %d | isspace result: %d\n", ft_isspace(' '), isspace(' '));
	printf("ft_isspace result: %d | isspace result: %d\n", ft_isspace('5'), isspace('5'));
	printf("ft_isspace result: %d | isspace result: %d\n", ft_isspace('\n'), isspace('\n'));
}
