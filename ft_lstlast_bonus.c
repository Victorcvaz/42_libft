/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:21:42 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/08/10 23:01:03 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
