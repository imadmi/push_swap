/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:04:29 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 13:19:11 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(l_list **stack)
{
	l_list	*i;

	i = *stack;
	while (i->next)
	{
		if (i->value > i->next->value)
			return (0);
		i = i->next;
	}
	return (1);
}

void	free_stack(l_list **stack)
{
	l_list	*i;
	l_list	*temp;

	i = *stack;
	while (i)
	{
		temp = i;
		i = i->next;
		free(temp);
	}
	free(stack);
}

int	ft_length_list(l_list *root)
{
	int		len;

	len = 0;
	while (root)
	{
		root = root->next;
		len++;
	}
	return (len);
}
