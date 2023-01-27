/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:00:12 by imimouni          #+#    #+#             */
/*   Updated: 2023/01/27 06:02:40 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *s, int *count)
{
	if (s == NULL)
		ft_putstr("(null)", count);
	else
		while (*s != '\0')
			ft_putchar(*s++, count);
}

void	ft_print_and_exit(char *msg)
{
	ft_printf("%s \n", msg);
	exit(0);
}