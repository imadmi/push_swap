/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile_sort_simple.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:48:44 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/25 05:17:31 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index_min(t_list **stack_a, int min)
{
	int		index_zero;
	t_list	*head;

	index_zero = 0;
	head = *stack_a;
	while (head)
	{
		if (head->index == min)
			return (index_zero);
		index_zero++;
		head = head->next;
	}
	return (index_zero);
}
