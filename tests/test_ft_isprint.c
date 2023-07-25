/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:43:56 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/24 19:48:27 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_isprint)
{
	//ARRANGE
	int		input = -10;
	int		response;

	//ACT
	while (input <= 256)
	{
		if (input >= 32 && input <= 126)
		{
			if (!(ft_isprint(input) > 0))
			{
				response = ft_isprint(input);
				input = 1;
				break ;
			}
		}
		else
		{
			if (ft_isprint(input) != 0)
			{
				response = ft_isprint(input);
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

MU_TEST_SUITE(ft_isprint_test_suite) 
{
	MU_RUN_TEST(test_ft_isprint);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isprint_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
