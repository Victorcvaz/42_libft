/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:42:18 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/14 20:56:29 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nxt;

	if (!lst || !f)
		return ;
	while (lst)
	{
		nxt = lst->next;
		f(lst->content);
		lst = nxt;
	}
}
