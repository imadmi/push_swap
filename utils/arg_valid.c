/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:13 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/03 16:18:25 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_number(char *nbr)
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

int	ft_is_out_of_int_range(long nbr)
{
	return (nbr > 2147483647 || nbr < -2147483648);
}

void	ft_arg_is_valid(int ac, char **av)
{
	int		i;
	long	num;
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
		num = ft_atoi(str[i]);
		if (!ft_is_number(str[i]))
			ft_print_and_exit("\33[31mError\n");
		if (ft_is_duplicated(num, str, i))
			ft_print_and_exit("\33[31mError\n");
		i++;
	}
	if (ac == 2)
		ft_free(str);
}
