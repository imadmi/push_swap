/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:50:47 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 12:02:31 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(l_list **stack_a, l_list **stack_b)
{
	int	index_min;

	index_min = ft_pos_index_min(stack_a, 0);
	if (index_min == 1)
		ft_sa(stack_a);
	else if (index_min == 2)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (index_min == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (index_min == 4)
		ft_rra(stack_a);
	if (ft_is_sorted(stack_a))
		return ;
	ft_push_b(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b, 1);
	ft_push_a(stack_a, stack_b);
}
