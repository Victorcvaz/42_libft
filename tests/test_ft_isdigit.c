/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:51:50 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/21 23:45:24 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_isdigit)
{
	//ARRANGE
	int		input = 0;
	int		expected_result;

	//ACT
	while (input <= 127)
	{	
		if (input >= '0' && input <= '9')
		{
			if (!(ft_isdigit(input) > 0))
			{
				expected_result = 255;
				break ;
			}
		}
		else
		{
			if (ft_isdigit(input) != 0)
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



MU_TEST_SUITE(ft_isdigit_test_suite) 
{
	MU_RUN_TEST(test_ft_isdigit);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_isdigit_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}

// #include "test_libft.h"

// int	main(void)
// {
// 	printf("ft_isdigit('a') result: %d | isdigit('a') result: %d\n", ft_isdigit('a'), isdigit('a'));
// 	printf("ft_isdigit('5') result: %d | ft_isdigit('5') result: %d\n", ft_isdigit('5'), isdigit('5'));
// 	printf("ft_isdigit('\\n') result:%d | ft_isdigit('\\n') result: %d\n", ft_isdigit('\n'), isdigit('\n'));
// }
