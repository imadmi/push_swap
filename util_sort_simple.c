/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_sort_simple.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 21:48:44 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/31 14:13:36 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_give_indexes_min(l_list **stack_a, int min)
{
	int		index_zero;
	l_list	*root;

	index_zero = 0;
	root = *stack_a;
	while ((root))
	{
		if ((root)->index == min)
			return (index_zero);
		index_zero++;
		(root) = (root)->next;
	}
	return (index_zero);
}

void	ft_print_and_exit(char *msg)
{
	write(2, msg, 12);
	exit(0);
}