/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:23:53 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/13 09:44:40 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_simple(t_list **stack_a, t_list **stack_b)
{
	int	length;

	length = ft_length_list(*stack_a);
	if (length == 2)
		ft_sa(stack_a);
	else if (length == 3)
		ft_sort_three(stack_a, 0);
	else if (length == 4)
		ft_sort_four(stack_a, stack_b, 0);
	else if (length == 5)
		ft_sort_five(stack_a, stack_b);
	free_stack(stack_b);
	free_stack(stack_a);
}
