/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initstack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 05:16:31 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/28 15:32:56 by imimouni         ###   ########.fr       */
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

// int	get_min(t_list *head)
// {
// 	t_list	*temp;
// 	int		min;

// 	temp = head;
// 	// if (!temp)
// 	// 	return (-1);
// 	min = 2147483647;
// 	while (temp)
// 	{
// 		if (temp->index == -1 && min > temp->value)
// 			min = temp->value;
// 		temp = temp->next;
// 	}
// 	return (min);
// }

int	get_min(t_list *head)
{
	t_list	*temp;
	t_list	*temp2;
	int		min;

	temp = head;
	temp2 = head;
	// if (!temp)
	// 	return (-1);
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
		if (temp->index == -1 && temp->value == min) // temp->index == -1 &&  must be deleted !
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

// void	ft_init_stack(t_list **stack_a, char **av)
// {
// 	int		i;
// 	t_list	*new;

// 	i = 1;
// 	while (av[i])
// 	{
// 		new = ft_list_new(ft_atoi(av[i]));
// 		ft_listadd_back(stack_a, new);
// 		i++;
// 		// ft_print_list(*stack_a);
// 	}
// 	ft_index(stack_a);
// }

void	ft_init_stack(t_list **stack_a, int ac, char **av)
{
	int		i;
	t_list	*new;
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
	ft_index(stack_a);
}