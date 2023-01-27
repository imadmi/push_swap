/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:17:55 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/27 12:23:47 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int number)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->value = number;
	new->index = -1;
	new->next = 0;
	return (new);
}

t_list	*ft_lstlast(t_list *head)
{
	t_list	*temp;

	temp = head;
	if (!temp)
		return (0);
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*n;

	if (*stack)
	{
		n = ft_lstlast(*stack);
		n->next = new;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

void	ft_lstadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

void	ft_show_lst(t_list *head)
{
	t_list	*temp;

	temp = head;
	if (!temp)
		return ;
	while (temp)
	{
		ft_printf("-->index : %d ; value : %d\n", temp->index, temp->value);
		temp = temp->next;
	}
}
