/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:15:58 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/02 19:46:29 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_swap(l_list **stack)
{
	int	tmp;

	if (ft_length_list(*stack) <= 1)
		return (0);
	tmp = (*stack)->value;
	(*stack)->value = (*stack)->next->value;
	(*stack)->next->value = tmp;
	return (1);
}

void	ft_sa(l_list **stack_a)
{
	if (ft_swap(stack_a) == 1)
		write(1,"sa\n",3);
	return ;
}

void	ft_sb(l_list **stack_b)
{
	if (ft_swap(stack_b) == 1)
		write(1,"sb\n",3);
	return ;
}
