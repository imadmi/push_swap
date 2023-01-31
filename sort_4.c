/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:43:53 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/31 14:03:45 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	the_rest(l_list **stack_a)
{
	if ((*stack_a)->index == 1)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((*stack_a)->index == 3)
	{
		if (((*stack_a)->next)->index == 1)
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
	else
	{
		if ((*stack_a)->next->index == 3)
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}

void	ft_sort_four(l_list **stack_a, l_list **stack_b)
{
	int	index_zero;

	index_zero = ft_give_indexes_min(stack_a, 0);
	if (index_zero == 1)
		ft_sa(stack_a);
	else if (index_zero == 2 || index_zero == 3)
	{
		ft_rra(stack_a);
		if (index_zero == 2)
			ft_rra(stack_a);
	}
	if (ft_is_sorted(stack_a))
		return ;
	ft_push_b(stack_a, stack_b);
	the_rest(stack_a);
	ft_push_a(stack_a, stack_b);
}
