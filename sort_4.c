/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:43:53 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 10:58:05 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(l_list **stack_a, l_list **stack_b, int min_index)
{
	int	index_min;

	index_min = ft_index_min(stack_a, min_index);
	if (index_min == 1)
		ft_sa(stack_a);
	else if (index_min == 2)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (index_min == 3)
	{
		ft_rra(stack_a);
	}
	if (ft_is_sorted(stack_a))
		return ;
	ft_push_b(stack_a, stack_b);
	ft_sort_three(stack_a, 1 + min_index);
	ft_push_a(stack_a, stack_b);
}
