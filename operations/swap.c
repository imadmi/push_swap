/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:15:58 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/30 17:03:35 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(l_list **stack)
{
	l_list	*root;
	l_list	*next;
	int		index;
	int		value;

	if (ft_length_list(*stack) <= 1)
		return (0);
	root = *stack;
	next = root->next;
	index = root->index;
	value = root->value;
	root->index = next->index;
	root->value = next->value;
	next->value = value;
	next->index = index;
	return (1);
}

int	ft_sa(l_list **stack_a)
{
	if (ft_swap(stack_a) == 0)
		return (0);
	write(1,"sa\n",3);
	return (1);
}

int	ft_sb(l_list **stack_b)
{
	if (ft_swap(stack_b) == 0)
		return (0);
	write(1,"sb\n",3);
	return (1);
}

int	ft_ss(l_list **stack_a, l_list **stack_b)
{
	if ((ft_length_list(*stack_a) < 2) || (ft_length_list(*stack_b) < 2))
		return (0);
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1,"ss\n",3);
	return (1);
}
