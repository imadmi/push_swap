/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:37:13 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/27 16:30:55 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	ft_push(t_list **a, t_list **b)
{
	t_list	*elm;
	t_list	*next;

	if (ft_length_list(*b) < 1)
		return (0);
	elm = *b;
	next = elm->next;
	ft_listadd_front(a, elm);
	*b = next;
	elm = 0;
	free(elm);
	return (1);
}

int	ft_push_a(t_list **stack_a, t_list **stack_b, int pr)
{
	if (ft_push(stack_a, stack_b) == 0)
		return (0);
	if (pr)
		ft_printf("pa\n");
	return (1);
}

int	ft_push_b(t_list **stack_a, t_list **stack_b, int pr)
{
	if (ft_push(stack_b, stack_a) == 0)
		return (0);
	if (pr)
		ft_printf("pb\n");
	return (1);
}
