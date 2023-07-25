/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:25:19 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/24 17:58:10 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_strlen_string_len_value)
{
	//ARRANGE
	char	input[] = "Victor Cesar";
	int		response = 12;
	int		expected_result = response;

	//ACT
	if (ft_strlen(input) != response)
		response = ft_strlen(input);

	//ASSERT
	mu_assert_int_eq(expected_result, response);
}

MU_TEST_SUITE(ft_strlen_test_suite)
{
	MU_RUN_TEST(test_ft_strlen_string_len_value);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_strlen_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
