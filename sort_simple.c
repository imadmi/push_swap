/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:23:53 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/25 05:18:27 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_suit_three(t_list *head_a, t_list **stack_a, int min)
{
	if (head_a->index != min && head_a->index != (2 + min))
	{
		if (head_a->next->index == (2 + min))
			ft_rra(stack_a, 1);
		else
			ft_sa(stack_a, 1);
	}
}

static	void	ft_sort_three(t_list **stack_a, int min)
{
	t_list	*head_a;

	head_a = *stack_a;
	if (ft_is_sorted(stack_a))
		return ;
	if (head_a->index == min)
	{
		ft_ra(stack_a, 1);
		ft_sa(stack_a, 1);
		ft_rra(stack_a, 1);
	}
	else if (head_a->index == (2 + min))
	{
		if (head_a->next->index == min)
			ft_ra(stack_a, 1);
		else
		{
			ft_sa(stack_a, 1);
			ft_rra(stack_a, 1);
		}
	}
	else
		ft_suit_three(head_a, stack_a, min);
}

static void	ft_sort_for(t_list **stack_a, t_list **stack_b, int min)
{
	int	index_zero;

	index_zero = ft_index_min(stack_a, min);
	if (index_zero == 1)
		ft_sa(stack_a, 1);
	else if (index_zero == 2 || index_zero == 3)
	{
		ft_rra(stack_a, 1);
		if (index_zero == 2)
			ft_rra(stack_a, 1);
	}
	if (ft_is_sorted(stack_a))
		return ;
	ft_push_b(stack_a, stack_b, 1);
	ft_sort_three(stack_a, 1 + min);
	ft_push_a(stack_a, stack_b, 1);
}

static void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	index_zero;

	index_zero = ft_index_min(stack_a, 0);
	if (index_zero == 1)
		ft_sa(stack_a, 1);
	else if (index_zero == 2)
	{
		ft_ra(stack_a, 1);
		ft_ra(stack_a, 1);
	}
	else if (index_zero == 3)
	{
		ft_rra(stack_a, 1);
		ft_rra(stack_a, 1);
	}
	else if (index_zero == 4)
		ft_rra(stack_a, 1);
	if (ft_is_sorted(stack_a))
		return ;
	ft_push_b(stack_a, stack_b, 1);
	ft_sort_for(stack_a, stack_b, 1);
	ft_push_a(stack_a, stack_b, 1);
}

void	ft_sort_simple(t_list **stack_a, t_list **stack_b)
{
	int	length;

	length = ft_length_lst(*stack_a);
	if (length == 2)
		ft_sa(stack_a, 1);
	else if (length == 3)
		ft_sort_three(stack_a, 0);
	else if (length == 4)
		ft_sort_for(stack_a, stack_b, 0);
	else if (length == 5)
		ft_sort_five(stack_a, stack_b);
	length = ft_length_lst(*stack_b);
}
