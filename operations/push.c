/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:37:13 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/13 11:06:45 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(t_list **stack_1, t_list **stack_2)
{
	t_list	*temperary;
	t_list	*new_root;

	if (ft_length_list(*stack_2) < 1)
		return (0);
	temperary = *stack_2;
	new_root = temperary->next;
	temperary->next = *stack_1;
	*stack_1 = temperary;
	*stack_2 = new_root;
	temperary = 0;
	return (1);
}

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == 1)
		write(1, "pa\n", 3);
	return ;
}

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	if (ft_push(stack_b, stack_a) == 1)
		write(1, "pb\n", 3);
	return ;
}
