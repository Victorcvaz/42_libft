/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:05:23 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/21 23:44:20 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_isspace)
{
	//ARRANGE
	int		input = 0;
	int		expected_result;

	//ACT
	while (input <= 127)
	{	
		if ((input >= 9 && input <= 13) || input == 32)
		{
			if (!(ft_isspace(input) > 0))
			{
				expected_result = 255;
				break ;
			}
		}
		else
		{
			if (!(ft_isspace(input) != 0))
			{
				expected_result = 255;
				break ;
			}
		}
		input++;
		expected_result = input;
	}	

	//ASSERT
	mu_assert_int_eq(input, expected_result);
}

MU_TEST_SUITE(ft_isspace_test_suite) 
{
	MU_RUN_TEST(test_ft_isspace);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isspace_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

// #include "test_libft.h"

// int	main(void)
// {
// 	printf("ft_isspace result: %d | isspace result: %d\n", ft_isspace(' '), isspace(' '));
// 	printf("ft_isspace result: %d | isspace result: %d\n", ft_isspace('5'), isspace('5'));
// 	printf("ft_isspace result: %d | isspace result: %d\n", ft_isspace('\n'), isspace('\n'));
// }
