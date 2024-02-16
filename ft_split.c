/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:45:31 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/13 01:07:32 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counterwords(char const *s, char c)
{
	int		i;
	int		count_words;
	char	comp;

	comp = c;
	i = 0;
	count_words = 0;
	while (*s)
	{
		if (*s != comp && (*(s + 1) == comp || *(s + 1) == '\0'))
		{
			count_words++;
		}
		s++;
	}
	return (count_words);
}

char	**ft_splitwords(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	j = 0;
	p = 0;
	while (i <= ft_strlen(s))
	{
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		if ((i == ft_strlen(s) || s[i] == c) && j > 0)
		{
			split[p] = ft_substr(s, i - j, j);
			j = 0;
			p++;
		}
		i++;
	}
	split[p] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		count_words;
	char	**split;

	count_words = ft_counterwords(s, c);
	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (count_words + 1));
	if (!split)
		return (NULL);
	split = ft_splitwords(split, s, c);
	return (split);
}
