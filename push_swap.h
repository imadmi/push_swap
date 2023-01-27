/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:29:43 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/27 12:15:45 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct x
{
int				value;
int				index;
	struct x	*next;
}		t_list;

void	ft_arg_is_valid(char **av);
void	ft_print_and_exit(char *msg);
void	ft_init_stack(t_list **stack_a, int argc, char **argv);
int		ft_is_sorted(t_list **stack);
void	free_stack(t_list **stack);

void	ft_sort_simple(t_list **stack_a, t_list **stack_b);
int		ft_index_min(t_list **stack_a, int min);
void	ft_radix_sort(t_list **stack_a, t_list **stack_b);

int		ft_sa(t_list **stack_a, int pr);
int		ft_sb(t_list **stack_b, int pr);
int		ft_ss(t_list **stack_a, t_list **stack_b, int pr);
int		ft_push_a(t_list **stack_a, t_list **stack_b, int pr);
int		ft_push_b(t_list **stack_a, t_list **stack_b, int pr);
int		ft_ra(t_list **stack_a, int pr);
int		ft_rb(t_list **stack_b, int pr);
int		ft_rr(t_list **stack_a, t_list **stack_b, int pr);
int		ft_rra(t_list **stack_a, int pr);
int		ft_rrb(t_list **stack_b, int pr);
int		ft_rrr(t_list **stack_a, t_list **stack_b, int pr);

t_list	*ft_lstnew(int number);
void	ft_lstadd_back(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *head);
void	ft_show_lst(t_list *head);
int		ft_length_lst(t_list *head);
void	ft_lstadd_front(t_list **stack, t_list *new);

#endif