/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:15:58 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/03 12:32:43 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(t_list **stack)
{
	t_list	*root;
	t_list	*next;
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

void	ft_sa(t_list **stack_a)
{
	if (ft_swap(stack_a) == 1)
		write(1, "sa\n", 3);
	return ;
}

void	ft_sb(t_list **stack_b)
{
	if (ft_swap(stack_b) == 1)
		write(1, "sb\n", 3);
	return ;
}
