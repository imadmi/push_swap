/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:29:43 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/03 16:16:10 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct x
{
	int				value;
	int				index;
	struct x		*next;
}		t_list;

int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_arg_is_valid(int ac, char **av);
void	ft_free(char **str);
void	ft_init_stack(t_list **stack_a, int ac, char **av);
int		ft_is_sorted(t_list **stack);
void	free_stack(t_list **stack);
int		ft_is_out_of_int_range(long nbr);

void	ft_sort_three(t_list **stack_a, int min_index);
void	ft_sort_four(t_list **stack_a, t_list **stack_b, int min_index);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	ft_give_indexes(t_list **stack);

void	ft_sort_simple(t_list **stack_a, t_list **stack_b);
int		ft_pos_index_min(t_list **stack_a, int min);
void	ft_radix_sort(t_list **stack_a, t_list **stack_b);
void	ft_print_and_exit(char *msg);
char	**ft_split(char	const *s, char c);

void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);

t_list	*ft_list_new(int number);
void	ft_listadd_back(t_list **stack, t_list *new);
int		ft_length_list(t_list *root);
void	ft_print_list(t_list *root);

#endif