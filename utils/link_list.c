/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:17:55 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/31 15:27:24 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

l_list	*fl_list_new(int number)
{
	l_list	*i;

	i = malloc(sizeof(l_list));
	if (!i)
		return (0);
	i->value = number;
	i->index = -1;
	i->next = NULL;
	return (i);
}

void	fl_listadd_back(l_list **stack, l_list *new)
{
	l_list	*i;

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

void	fl_listadd_front(l_list **stack, l_list *new)
{
	new->next = *stack;
	*stack = new;
}

void ft_print_list(l_list *root) 
{	
	l_list	*temp;

	temp = root;
	if (!temp)
		return ;
	while (temp)
	{
		printf("--> index : %d ; value : %d\n", temp->index, temp->value);
		temp = temp->next;
	}
}
