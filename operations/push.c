/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:37:13 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/30 17:00:39 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_push(l_list **a, l_list **b)
{
	l_list	*elm;
	l_list	*next;

	// if (ft_length_list(*b) < 1)
	// 	return (0);
	elm = *b;
	next = elm->next;
	fl_listadd_front(a, elm);
	*b = next;
	elm = 0;
	free(elm);
	return (1);
}

int	ft_push_a(l_list **stack_a, l_list **stack_b)
{
	if (ft_push(stack_a, stack_b) == 0)
		return (0);
	write(1,"pa\n",3);
	return (1);
}

int	ft_push_b(l_list **stack_a, l_list **stack_b)
{
	if (ft_push(stack_b, stack_a) == 0)
		return (0);
	write(1,"pb\n",3);
	return (1);
}
