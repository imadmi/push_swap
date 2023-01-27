/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:13 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/27 11:54:38 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isnumber(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] == '-' || nbr[0] == '+')
		i++;
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_is_duplicated(int nbr, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == nbr)
			return (1);
		i++;
	}
	return (0);
}

void	ft_arg_is_valid(char **av)
{
	int		i;
	long	temp;

	i = 1;
	while (av[i])
	{
		temp = ft_atoi(av[i]);
		if (!ft_isnumber(av[i]))
			ft_print_and_exit("Error");
		if (ft_is_duplicated(temp, av, i))
			ft_print_and_exit("Error");
		i++;
	}
}
