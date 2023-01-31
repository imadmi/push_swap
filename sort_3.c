/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:39:20 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/31 20:46:03 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(l_list **stack_a, int min)
{
	if (ft_is_sorted(stack_a))
		return ;
	if ((*stack_a)->index == min)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if ((*stack_a)->index == (2 + min))
	{
		if ((*stack_a)->next->index == min)
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