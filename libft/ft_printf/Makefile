# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 07:53:20 by imimouni          #+#    #+#              #
#    Updated: 2023/01/27 09:36:05 by imimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS := -Wall -Werror -Wextra

AR = ar -rc
RM = rm -f

NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c	\
	ft_helper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re