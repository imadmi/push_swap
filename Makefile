# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 04:56:21 by imimouni          #+#    #+#              #
#    Updated: 2023/01/26 07:55:07 by imimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIBFT	=	libft/libft.a
FT_PRINTF	=	libft/ft_printf/libftprintf.a

SRCS		= 	push_swap.c \
				utils/arg_valid.c \
				utils/initStack.c \
				utils/link_list.c \
				utils/is_sorted.c \
				operations/operations_push.c \
				operations/operations_rev_rotate.c \
				operations/operations_rotate.c \
				operations/operations_swap.c \
				sort_simple.c utile_sort_simple.c \
				radix_sort.c

OBJES 		= ${SRCS:.c=.o}

NAME 		= push_swap
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -rf

%.o			:	%.c
				$(CC) ${CFLAGS} -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(FT_PRINTF) $(LIBFT) $(OBJES) push_swap.h
				$(CC) $(OBJES) ${LIBFT} $(FT_PRINTF) -o $(NAME)
				clear
				@printf "\e[38;5;118m Push_swap is ready.\n"

$(LIBFT)	:
				$(MAKE) -C libft

$(FT_PRINTF)	:
				$(MAKE) -C libft/ft_printf

clean		:
				$(MAKE) -C libft clean
				$(MAKE) -C libft/ft_printf clean
				$(RM) $(OBJES)
				clear
				@printf "\e[38;5;226m object files removed.\n"

fclean		:	clean
				$(MAKE) -C libft fclean
				$(MAKE) -C libft/ft_printf fclean
				$(RM) $(NAME)
				clear
				@printf "\e[38;5;226mthe object files and the exicutable are removed.\n"

re			:	clean all

.PHONY		:	all clean fclean re ${LIBFT} $(FT_PRINTF)