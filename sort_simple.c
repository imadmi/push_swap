/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:23:53 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/30 16:57:03 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(l_list **stack_a, int min)
{
	if ((*stack_a)->index == min)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((*stack_a)->index == (2 + min))
	{
		if (((*stack_a)->next)->index == min)
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
	else
	{
		if ((*stack_a)->next->index == (2 + min))
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}

void	ft_sort_for(l_list **stack_a, l_list **stack_b, int min)
{
	int	index_zero;

	index_zero = ft_give_indexes_min(stack_a, min);
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
	ft_sort_three(stack_a, 1 + min);
	ft_push_a(stack_a, stack_b);
}

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
	ft_push_b(stack_a, stack_b);
	ft_sort_for(stack_a, stack_b, 1);
	ft_push_a(stack_a, stack_b);
}

void	ft_sort_simple(l_list **stack_a, l_list **stack_b)
{
	int	length;

	length = ft_length_list(*stack_a);
	if (length == 2)
		ft_sa(stack_a);
	else if (length == 3)
		ft_sort_three(stack_a, 0);
	else if (length == 4)
		ft_sort_for(stack_a, stack_b, 0);
	else if (length == 5)
		ft_sort_five(stack_a, stack_b);
	length = ft_length_list(*stack_b);
}
