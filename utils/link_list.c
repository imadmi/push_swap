/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:17:55 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 17:07:06 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

l_list	*ft_list_new(int number)
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

void	ft_listadd_back(l_list **stack, l_list *new)
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
