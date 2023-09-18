/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victorcvaz <victorcvaz@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:13:41 by victorcvaz        #+#    #+#             */
/*   Updated: 2023/09/14 20:56:39 by victorcvaz       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*aux;

	counter = 0;
	aux = lst;
	while (aux)
	{
		counter++;
		aux = aux->next;
	}
	return (counter);
}
