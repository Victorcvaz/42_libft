/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:51:50 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/20 23:17:58 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("ft_isdigit('a') result: %d | isdigit('a') result: %d\n", ft_isdigit('a'), isdigit('a'));
	printf("ft_isdigit('5') result: %d | ft_isdigit('5') result: %d\n", ft_isdigit('5'), isdigit('5'));
	printf("ft_isdigit('\\n') result:%d | ft_isdigit('\\n') result: %d\n", ft_isdigit('\n'), isdigit('\n'));
}
