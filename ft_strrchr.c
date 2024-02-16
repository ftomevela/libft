/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:24:15 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/01/17 14:04:45 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	abuscar;

	i = ft_strlen(s);
	abuscar = c;
	while (i >= 0)
	{
		if (s[i] != abuscar)
			i--;
		else
			return ((char *)&s[i]);
	}
	if (abuscar == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
