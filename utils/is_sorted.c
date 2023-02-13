/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:04:29 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/12 06:45:34 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted(t_list **stack)
{
	t_list	*i;

	i = *stack;
	if (!i)
		return (1);
	while (i->next)
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
	t_list	*temp;

	i = *stack;
	while (i)
	{
		temp = i;
		i = i->next;
		free(temp);
	}
	free(stack);
}

int	ft_length_list(t_list *root)
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

int	ft_is_number(char *nbr)
{
	int	i;

	i = 0;
	if ((nbr[0] == '-' || nbr[0] == '+') && nbr[1] != '\0')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_duplicated(int nbr, char **av, int i)
{
	i++;
	while (av[i])
	{
		if (ft_atoi(av[i]) == nbr)
			return (1);
		i++;
	}
	return (0);
}
