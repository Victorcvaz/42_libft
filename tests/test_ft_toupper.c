/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:30:39 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/21 23:36:46 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_toupper)
{
	//ARRANGE
	int		input = 0;
	int		expected_result;

	//ACT	
	while (input <= 127)
	{	
		if (input >= 'a' && input <= 'z')
		{
			if (!(ft_toupper(input) == (input - 32)))
			{
				expected_result = 255;
				break ;
			}
		}
		else
		{
			if (!(ft_toupper(input) == input))
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

MU_TEST_SUITE(ft_toupper_test_suite)
{
	MU_RUN_TEST(test_ft_toupper);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_toupper_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

// #include "test_libft.h"

// int	main(void)
// {
// 	printf("ft_toupper('z') result: %d | toupper('z') result: %d\n", ft_toupper('z'), toupper('z'));
// 	printf("ft_toupper('5') result: %d | ft_toupper('5') result: %d\n", ft_toupper('5'), toupper('5'));
// 	printf("ft_toupper('A') result: %d | ft_toupper('A') result: %d\n", ft_toupper('A'), toupper('A'));
// }
