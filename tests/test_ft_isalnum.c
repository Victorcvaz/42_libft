/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:41:28 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/22 03:55:57 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_isalnum)
{
	//ARRANGE
	int		input = 0;
	int		expected_result;

	//ACT
	while (input <= 127)
	{	
		if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')
		|| (input >= '0' && input <= '9'))
		{
			if (!(ft_isalnum(input) > 0))
			{
				expected_result = 255;
				break ;
			}
		}
		else
		{
			if (ft_isalnum(input) != 0)
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

MU_TEST_SUITE(ft_function_test_suite) 
{
	MU_RUN_TEST(test_ft_isalnum);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_function_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

// #include "test_libft.h"

// int	main(void)
// {
// 	printf("ft_isisalnum result: %d | isisalnum result: %d\n", ft_isalnum('z'), isalnum('z'));
// 	printf("ft_isisalnum result: %d | isisalnum result: %d\n", ft_isalnum('1'), isalnum('1'));
// 	printf("ft_isisalnum result: %d | isisalnum result: %d\n", ft_isalnum('\0'), isalnum('\0'));
// }
