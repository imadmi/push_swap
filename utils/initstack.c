/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 05:16:31 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 16:36:41 by imimouni         ###   ########.fr       */
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

int	get_min(l_list *root)
{
	l_list	*temp;
	l_list	*temp2;
	int		min;

	temp = root;
	temp2 = root;
	while (temp2)
	{
		if (temp2->index == -1)
		{
			min = temp2->value;
			break;
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

void	ft_give_indexes(l_list **stack_a)
{
	int		min;
	l_list	*temp;
	int		index;

	min = get_min(*stack_a);
	temp = *stack_a;
	index = 0;
	while (temp)
	{
		if ( temp->index == -1 &&temp->value == min)
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

void	ft_init_stack(l_list **stack_a, int ac, char **av)
{
	int		i;
	l_list	*new;
	char	**str;

	i = 0;
	if (ac == 2)
		str = ft_split(av[1], ' ');
	else
	{
		i = 1;
		str = av;
	}
	while (str[i])
	{
		new = ft_list_new(ft_atoi(str[i]));
		ft_listadd_back(stack_a, new);
		i++;
	}
	if (ac == 2)
		ft_free(str);
}