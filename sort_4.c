/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:43:53 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/31 20:46:21 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(l_list **stack_a, l_list **stack_b, int min)
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