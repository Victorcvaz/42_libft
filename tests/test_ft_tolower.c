/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:01:38 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/24 18:27:09 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_tolower_with_ascii)
{
	//ARRANGE
	int		input = 0;
	int		response;

	//ACT	
	while (input <= 127)
	{	
		if (input >= 'A' && input <= 'Z')
		{
			if (ft_tolower(input) != (input + 32))
			{
				response = ft_tolower(input) + 32;
				break ;
			}
		}
		else
		{
			if (ft_tolower(input) != input)
			{
				response = ft_tolower(input);
				break ;
			}
		}
		input++;
		response = input;
	}
	
	//ASSERT
	mu_assert_int_eq(input, response);
}

MU_TEST_SUITE(ft_tolower_test_suite)
{
	MU_RUN_TEST(test_ft_tolower_with_ascii);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_tolower_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
