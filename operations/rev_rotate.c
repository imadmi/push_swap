/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:39:20 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 16:41:37 by imimouni         ###   ########.fr       */
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

void	ft_rra(l_list **stack_a)
{
	if (ft_reverse_rotate(stack_a) == 1)
		write(1,"rra\n",4);
	return ;
}

void	ft_rrb(l_list **stack_b)
{
	if (ft_reverse_rotate(stack_b) == 1)
		write(1,"rrb\n",4);
	return ;
}
