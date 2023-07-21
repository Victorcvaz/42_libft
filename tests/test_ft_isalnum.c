/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:41:28 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/20 20:50:25 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

int	main(void)
{
	printf("ft_isisalnum result: %d | isisalnum result: %d\n", ft_isalnum('z'), isalnum('z'));
	printf("ft_isisalnum result: %d | isisalnum result: %d\n", ft_isalnum('1'), isalnum('1'));
	printf("ft_isisalnum result: %d | isisalnum result: %d\n", ft_isalnum('\0'), isalnum('\0'));
}
