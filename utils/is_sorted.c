/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:04:29 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/28 09:51:45 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list **stack)
{
	t_list	*i;

	i = *stack;
	while (i && i->next)
	{
		if (i->value > i->next->value)
			return (0);
		i = i->next;
	}
	return (1);
}

void	free_stack(t_list **stack)
{
	t_list	*i;
	t_list	*tmp;

	i = *stack;
	while (i)
	{
		tmp = i;
		i = i->next;
		free(tmp);
	}
	free(stack);
}

int	ft_length_list(t_list *head)
{
	t_list	*temp;
	int		len;

	temp = head;
	len = 1;
	if (!temp)
		return (0);
	while (temp->next)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
