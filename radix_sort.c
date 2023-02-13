/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:54:49 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/13 11:05:34 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	int		lenght;
	t_list	*root_a;

	i = 0;
	lenght = ft_length_list(*stack_a);
	while (1)
	{
		j = -1;
		while (++j < lenght)
		{
			root_a = *stack_a;
			if (((root_a->index >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_push_b(stack_a, stack_b);
		}
		while (ft_length_list(*stack_b))
			ft_push_a(stack_a, stack_b);
		if (ft_is_sorted(stack_a))
			ft_the_rest(stack_a, stack_b);
		i++;
	}
}
