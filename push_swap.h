/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:29:43 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/01 17:07:01 by imimouni         ###   ########.fr       */
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
}		l_list;

int     ft_atoi(const char *str);
int     ft_isdigit(int c);
void	ft_arg_is_valid(int ac, char **av);
void	ft_free(char **str);
void	ft_init_stack(l_list **stack_a, int ac, char **av);
int		ft_is_sorted(l_list **stack);
void	free_stack(l_list **stack);

void	ft_sort_three(l_list **stack_a, int min_index);
void	ft_sort_four(l_list **stack_a, l_list **stack_b, int min_index);
void	ft_sort_five(l_list **stack_a, l_list **stack_b);
void	ft_give_indexes(l_list **stack_a);

void	ft_sort_simple(l_list **stack_a, l_list **stack_b);
int		ft_pos_index_min(l_list **stack_a, int min);
void	ft_radix_sort(l_list **stack_a, l_list **stack_b);
void	ft_print_and_exit(char *msg);
char	**ft_split(char	const *s, char c);

void	ft_sa(l_list **stack_a);
void	ft_sb(l_list **stack_b);
void	ft_push_a(l_list **stack_a, l_list **stack_b);
void	ft_push_b(l_list **stack_a, l_list **stack_b);
void	ft_ra(l_list **stack_a);
void	ft_rb(l_list **stack_b);
void	ft_rra(l_list **stack_a);
void	ft_rrb(l_list **stack_b);

l_list	*ft_list_new(int number);
void	ft_listadd_back(l_list **stack, l_list *new);
int		ft_length_list(l_list *root);
void	ft_print_list(l_list *root);

#endif