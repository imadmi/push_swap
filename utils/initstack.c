/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 05:16:31 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/13 10:51:58 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
		free(str[--i]);
	free(str);
}

int	get_min(t_list *root)
{
	t_list	*temp;
	t_list	*temp2;
	int		min;

	temp = root;
	temp2 = root;
	while (temp2)
	{
		if (temp2->index == -1)
		{
			min = temp2->value;
			break ;
		}
		temp2 = temp2->next;
	}
	while (temp)
	{
		if (temp->index == -1 && min > temp->value)
			min = temp->value;
		temp = temp->next;
	}
	return (min);
}

void	ft_give_indexes(t_list **stack)
{
	int		min;
	t_list	*temp;
	int		index;

	min = get_min(*stack);
	temp = *stack;
	index = 0;
	while (temp)
	{
		if (temp->index == -1 && temp->value == min)
		{
			temp->index = index;
			index++;
			temp = *stack;
			min = get_min(*stack);
		}
		else
			temp = temp->next;
	}
}
