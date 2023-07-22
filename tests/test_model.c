/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_model.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:02:52 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/21 21:50:29 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_case_details)
{
	//ARRANGE
	char	input = 'A';
	int		expected_result = 1;
	int		actual_result;

	//ACT
	actual_result = ft_function(input);

	//ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_function_test_suite) 
{
	MU_RUN_TEST(test_case_details);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_function_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
