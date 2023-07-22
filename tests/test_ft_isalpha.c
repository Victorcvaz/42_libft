/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:25:11 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/22 03:42:11 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_isalpha)
{
	//ARRANGE
	int		input = 0;
	int		expected_result;

	//ACT
	while (input <= 127)
	{	
		if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
		{
			if (!(ft_isalpha(input) > 0))
			{
				expected_result = 255;
				break ;
			}
		}
		else
		{
			if (ft_isalpha(input) != 0)
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

MU_TEST_SUITE(ft_isalpha_test_suite) 
{
	MU_RUN_TEST(test_ft_isalpha);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

// #include "test_libft.h"

// int	main(void)
// {
// 	printf("ft_isalpha result: %d | isalpha result: %d\n", ft_isalpha('m'), isalpha('m'));
// 	printf("ft_isalpha result: %d | isalpha result: %d\n", ft_isalpha('0'), isalpha('0'));
// 	printf("ft_isalpha result: %d | isalpha result: %d\n", ft_isalpha('\0'), isalpha('\0'));
// }
