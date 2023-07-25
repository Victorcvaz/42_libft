/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcesar-v <vcesar-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 21:32:50 by vcesar-v          #+#    #+#             */
/*   Updated: 2023/07/24 22:23:46 by vcesar-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

MU_TEST(test_ft_strchr)
{
	//ARRANGE
	char	input_str[] = "HumanCoder42";
	int		input_ascii = 0;
	char	response[];

	//ACT
	while (input_ascii <= 127)
	{
		if (test_ft_strchr(input_ascii, input_str)[0] != '\0')
		{
			// there is a match
			if (strchr(input_ascii, input_str)[0] == '\0')
			{
				response[0] = '\0'; 
				break ;
			}
		}
		else
		{	
			// there isn't a match
			if (strchr(input_ascii, input_str)[0] != '\0')
			{
				response[0] = '\0';
				break ;
			}
		}
		response[0] = input_ascii;
		input_ascii++;
	}

	//ASSERT
	mu_assert_int_eq(input_ascii, response[0]);
}

MU_TEST_SUITE(ft_strchr_test_suite) 
{
	MU_RUN_TEST(test_ft_strchr);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(ft_strchr_test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
