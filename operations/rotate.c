/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:38:05 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/30 17:02:51 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rotate(l_list **stack)
{
	l_list	*i;
	l_list	*last;

	if (ft_length_list(*stack) <= 1)
		return (0);
	i = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = i->next;
	last->next = i;
	i->next = 0;
	return (1);
}

int	ft_ra(l_list **stack_a)
{
	if (ft_rotate(stack_a) == 0)
		return (0);
	write(1,"ra\n",3);
	return (1);
}

int	ft_rb(l_list **stack_b)
{
	if (ft_rotate(stack_b) == 0)
		return (0);
	write(1,"rb\n",3);
	return (1);
}

int	ft_rr(l_list **stack_a, l_list **stack_b)
{
	if (ft_length_list(*stack_a) <= 1 || ft_length_list(*stack_b) <= 1)
		return (0);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write(1,"rr\n",3);
	return (1);
}
