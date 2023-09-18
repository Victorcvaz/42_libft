/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:21:42 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/14 20:56:31 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr_node;

	if (!lst)
		return (NULL);
	curr_node = lst;
	while (curr_node->next)
	{
		curr_node = curr_node->next;
	}
	return (curr_node);
}
