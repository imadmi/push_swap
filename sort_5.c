/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:50:47 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/31 14:03:01 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(l_list **stack_a, l_list **stack_b)
{
	int	index_zero;

	index_zero = ft_give_indexes_min(stack_a, 0);
	if (index_zero == 1)
		ft_sa(stack_a);
	else if (index_zero == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (index_zero == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (index_zero == 4)
		ft_rra(stack_a);
	if (ft_is_sorted(stack_a))
		return ;
	ft_push_b(stack_a, stack_b);// min 1
	index_zero = ft_give_indexes_min(stack_a, 1);
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
	ft_push_b(stack_a, stack_b);// min 2
	if (ft_is_sorted(stack_a))
		return ;
	if ((*stack_a)->index == 2)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((*stack_a)->index == (2 + 2))
	{
		if ((*stack_a)->next->index == 2)
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
	else
	{
		if ((*stack_a)->next->index == (2 + 2))
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
	ft_push_a(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}