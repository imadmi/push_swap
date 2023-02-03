/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:39:20 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/03 12:29:10 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_list **stack_a, int min_index)
{
	if ((*stack_a)->index == min_index)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((*stack_a)->index == (2 + min_index))
	{
		if ((*stack_a)->next->index == min_index)
			ft_ra(stack_a);
		else
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	}
	else
	{
		if ((*stack_a)->next->index == (2 + min_index))
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}
