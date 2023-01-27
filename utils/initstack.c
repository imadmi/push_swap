/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 05:16:31 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/27 12:00:15 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_list *head)
{
	t_list	*temp;
	int		min;

	temp = head;
	if (!temp)
		return (-1);
	min = 2147483647;
	while (temp)
	{
		if (temp->index == -1 && min > temp->value)
			min = temp->value;
		temp = temp->next;
	}
	return (min);
}

static void	ft_index(t_list **stack_a)
{
	int		min;
	t_list	*temp;
	int		index;

	min = get_min(*stack_a);
	temp = *stack_a;
	index = 0;
	while (temp)
	{
		if (temp->index == -1 && temp->value == min)
		{
			temp->index = index;
			index++;
			temp = *stack_a;
			min = get_min(*stack_a);
		}
		else
			temp = temp->next;
	}
	
}

void	ft_init_stack(t_list **stack_a, int ac, char **av)
{
	int		i;
	t_list	*new;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			new = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(stack_a, new);
			i++;
		}
	}
	ft_index(stack_a);
}