/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:48:44 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/14 04:20:44 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pos_index_min(t_list **stack_a, int min)
{
	int		index_min;
	t_list	*i;

	index_min = 0;
	i = *stack_a;
	while (i)
	{
		if (i->index == min)
			return (index_min);
		index_min++;
		i = i->next;
	}
	return (-1);
}

void	ft_print_and_exit(char *msg)
{
	write(2, msg, 11);
	exit(0);
}

int	is_all_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
