# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 04:56:21 by imimouni          #+#    #+#              #
#    Updated: 2023/02/15 06:22:49 by imimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	push_swap.c \
				utils/arg_valid.c \
				utils/initstack.c \
				utils/link_list.c \
				utils/is_sorted.c \
				operations/push.c \
				operations/rev_rotate.c \
				operations/rotate.c \
				operations/swap.c \
				sort_simple.c \
				sort_simple_utils.c \
				radix_sort.c \
				ft_split.c \
				ft_atoi.c \
				sort_3.c \
				sort_4.c \
				sort_5.c

OBJES = $(SRCS:.c=.o)

NAME 		= push_swap
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror -fsanitize=address
RM 			= rm -rf

%.o			:	%.c push_swap.h
				$(CC) ${CFLAGS} -c $< -o $@

all			:	$(NAME)

$(NAME)		:	$(OBJES)
				@$(CC) $(CFLAGS) $(OBJES) -o $(NAME)
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"

f			:	all clean
				clear
				@echo "\033[0;92m Push_swap is ready.\033[0m"

clean		:
				@$(RM) $(OBJES)
				clear
				@echo "\033[0;93m object files removed.\033[0m"

fclean		:	clean
				$(RM) $(NAME)
				clear
				@echo "\033[0;93mthe object files and the exicutable are removed.\033[0m"

re			:	clean all

.PHONY		:	all clean fclean re f