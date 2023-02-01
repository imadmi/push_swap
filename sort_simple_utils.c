/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_sort_simple.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:48:44 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 10:52:27 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index_min(l_list **stack_a, int min)
{
	int		index_min;
	l_list	*i;

	index_min = 0;
	i = *stack_a;
	while (i)
	{
		if ((i)->index == min)
			return (index_min);
		index_min++;
		i = i->next;
	}
	return (index_min);
}

void	ft_print_and_exit(char *msg)
{
	write(2, msg, 11);
	exit(0);
}