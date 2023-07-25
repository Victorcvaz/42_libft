/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:50:40 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/24 19:41:08 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_isascii)
{
	//ARRANGE
	int		input = -10;
	int		response;

	//ACT
	while (input <= 256)
	{
		if (input >= 0 && input <= 127)
		{
			if (!(ft_isascii(input) > 0))
			{
				response = ft_isascii(input);
				input = 1;
				break ;
			}
		}
		else
		{
			if (ft_isascii(input) != 0)
			{
				response = ft_isascii(input);
				input = 0;
				break ;
				
			}
		}
		input++;
		response = input;
	}

	//ASSERT
	mu_assert_int_eq(input, response);
}

MU_TEST_SUITE(ft_isascii_test_suite) 
{
	MU_RUN_TEST(test_ft_isascii);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isascii_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
