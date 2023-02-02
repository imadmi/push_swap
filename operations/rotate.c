/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:38:05 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 16:44:19 by imimouni         ###   ########.fr       */
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

void	ft_ra(l_list **stack_a)
{
	if (ft_rotate(stack_a) == 1)
		write(1,"ra\n",3);
	return ;
}

void	ft_rb(l_list **stack_b)
{
	if (ft_rotate(stack_b) == 1)
		write(1,"rb\n",3);
	return ;
}
