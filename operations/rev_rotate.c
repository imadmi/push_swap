/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:39:20 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/30 17:01:37 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_reverse_rotate(l_list **stack)
{
	l_list	*temp;
	l_list	*last;

	if (ft_length_list(*stack) <= 1)
		return (0);
	temp = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = last;
	last->next = temp;
	while (temp->next)
	{
		if (temp->next == last)
			temp->next = 0;
		else
			temp = temp->next;
	}
	return (1);
}

int	ft_rra(l_list **stack_a)
{
	if (ft_reverse_rotate(stack_a) == 0)
		return (0);
	write(1,"rra\n",4);
	return (1);
}

int	ft_rrb(l_list **stack_b)
{
	if (ft_reverse_rotate(stack_b) == 0)
		return (0);
	write(1,"rrb\n",4);
	return (1);
}

int	ft_rrr(l_list **stack_a, l_list **stack_b)
{
	if (ft_length_list(*stack_a) <= 1 || ft_length_list(*stack_b) <= 1)
		return (0);
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	write(1,"rrr\n",4);
	return (1);
}
