/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:38:05 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/25 05:18:27 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*last;

	if (ft_length_lst(*stack) <= 1)
		return (0);
	temp = *stack;
	last = ft_lstlast(*stack);
	*stack = temp->next;
	last->next = temp;
	temp->next = 0;
	return (1);
}

int	ft_ra(t_list **stack_a, int pr)
{
	if (ft_rotate(stack_a) == 0)
		return (0);
	if (pr)
		ft_printf("ra\n");
	return (1);
}

int	ft_rb(t_list **stack_b, int pr)
{
	if (ft_rotate(stack_b) == 0)
		return (0);
	if (pr)
		ft_printf("rb\n");
	return (1);
}

int	ft_rr(t_list **stack_a, t_list **stack_b, int pr)
{
	if (ft_length_lst(*stack_a) <= 1 || ft_length_lst(*stack_b) <= 1)
		return (0);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	if (pr)
		ft_printf("rr\n");
	return (1);
}
