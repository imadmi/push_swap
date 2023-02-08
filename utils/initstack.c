/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 05:16:31 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/08 06:25:17 by imimouni         ###   ########.fr       */
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

void	ft_init_stack(t_list **stack_a, int ac, char **av)
{
	int		i;
	t_list	*new;
	char	*str1;
	char	**str;

	i = 0;
	str1 = concat_strs(av + 1, ac - 1);
	str = ft_split(str1, ' ');
	while (str[i])
	{
		new = ft_list_new(ft_atoi(str[i]));
		ft_listadd_back(stack_a, new);
		i++;
	}
}
