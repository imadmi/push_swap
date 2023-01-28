/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:17:55 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/28 09:58:51 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_list_new(int number)
{
	t_list	*i;

	i = malloc(sizeof(t_list));
	if (!i)
		return (0);
	i->value = number;
	i->index = -1;
	i->next = NULL;
	return (i);
}

void	ft_listadd_back(t_list **stack, t_list *new)
{
	t_list	*i;

	if (*stack)
	{
		i = *stack;
		while (i->next)
			i = i->next;
		i->next = new;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

void	ft_listadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

void	ft_print_list(t_list *head)
{
	t_list	*i;

	i = head;
	while (i)
	{
		ft_printf("-->index : %d ; value : %d\n", i->index, i->value);
		i = i->next;
	}
}
