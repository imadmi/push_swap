# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 04:56:21 by imimouni          #+#    #+#              #
#    Updated: 2023/01/27 11:50:15 by imimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIBFT	=	libft/libft.a
FT_PRINTF	=	libft/ft_printf/libftprintf.a

SRCS		= 	push_swap.c \
				utils/arg_valid.c \
				utils/initstack.c \
				utils/link_list.c \
				utils/is_sorted.c \
				operations/operations_push.c \
				operations/operations_rev_rotate.c \
				operations/operations_rotate.c \
				operations/operations_swap.c \
				sort_simple.c utile_sort_simple.c \
				radix_sort.c

OBJES = $(SRCS:.c=.o)

NAME 		= push_swap
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -rf

%.o			:	%.c push_swap.h
				$(CC) ${CFLAGS} -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJES) 
				$(MAKE) -C libft
				$(MAKE) -C libft/ft_printf
				$(CC) $(CFLAGS) $(LIBFT) $(FT_PRINTF) $(OBJES) -o $(NAME)
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"


clean		:
				$(MAKE) -C libft clean
				$(MAKE) -C libft/ft_printf clean
				$(RM) $(OBJES)
				clear
				@echo "\033[0;93m object files removed.\033[0m"

fclean		:	clean
				make -C libft fclean
				make -C libft/ft_printf fclean
				$(RM) $(NAME)
				clear
				@echo "\033[0;93mthe object files and the exicutable are removed.\033[0m"

re			:	clean all

.PHONY		:	all clean fclean re