/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:15:52 by imimouni          #+#    #+#             */
/*   Updated: 2023/02/12 02:28:46 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_words(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int	words_lenght(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_freee(int i, char **str)
{
	i--;
	while (--i >= 0)
		free(str[i--]);
	free (str);
	return (0);
}

char	**ft_fill(char const *s, int countwords, char c, char **spl_words)
{
	int		i;
	int		j;
	int		lenght;

	i = 0;
	while (i < countwords)
	{
		while (*s == c)
			s++;
		lenght = words_lenght(s, c);
		spl_words[i] = (char *)malloc(sizeof(char) * (lenght + 1));
		if (spl_words == 0)
			return (ft_freee(i, spl_words));
		j = 0;
		while (j < lenght)
			spl_words[i][j++] = *s++;
		spl_words[i][j] = '\0';
		i++;
	}
	spl_words[i] = 0;
	return (spl_words);
}

char	**ft_split(char	const *s, char c)
{
	char	**spl_words;
	int		countwords;

	if (!s)
		return (0);
	countwords = count_words(s, c);
	spl_words = (char **)malloc(sizeof(char *) * (countwords + 1));
	if (!spl_words)
		return (0);
	spl_words = ft_fill(s, countwords, c, spl_words);
	return (spl_words);
}
