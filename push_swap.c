/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:19:09 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/28 13:00:55 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac > 1)
	{
		ft_arg_is_valid(ac, av);
		stack_a = malloc(sizeof(t_list));
		stack_b = malloc(sizeof(t_list));
		*stack_a = 0;
		*stack_b = 0;
		ft_init_stack(stack_a, ac, av);
		if (ft_is_sorted(stack_a) == 1)
		{
			free_stack(stack_a);
			free_stack(stack_b);
			exit(0);
		}
		if (ft_length_list(*stack_a) <= 5)
			ft_sort_simple(stack_a, stack_b);
		else
			ft_radix_sort(stack_a, stack_b);
	}
	return (0);
}
