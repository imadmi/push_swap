/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_valid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:13 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/14 04:20:25 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_out_of_int_range(long nbr)
{
	return (nbr > 2147483647 || nbr < -2147483648);
}

void	check_empty_args(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (is_all_spaces(argv[i]))
			ft_print_and_exit("\33[31mError\n");
		if (argv[i][0] == '\0')
			ft_print_and_exit("\33[31mError\n");
		i++;
	}
}

int	total_size(char **str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		size += ft_strlen(str[i]);
		i++;
	}
	return (size);
}

char	*concat_strs(char **str, int space_count)
{
	int		i;
	char	*concat;

	concat = malloc(total_size(str) + space_count);
	if (!concat)
		return (0);
	concat[0] = '\0';
	i = 0;
	while (str[i])
	{
		ft_strjoin(concat, str[i]);
		i++;
	}
	return (concat);
}

void	ft_arg_is_valid(t_list **stack_a, int ac, char **av)
{
	int		i;
	t_list	*new;
	long	num;
	char	*str1;
	char	**str;

	i = -1;
	check_empty_args(av);
	str1 = concat_strs(av + 1, ac - 1);
	str = ft_split(str1, ' ');
	free(str1);
	while (str[++i])
	{
		num = ft_atoi(str[i]);
		if (!ft_is_number(str[i]) || ft_is_duplicated(num, str, i))
			ft_print_and_exit("\33[31mError\n");
	}
	i = -1;
	while (str[++i])
	{
		new = ft_list_new(ft_atoi(str[i]));
		ft_listadd_back(stack_a, new);
		free(str[i]);
	}
	free(str);
}
