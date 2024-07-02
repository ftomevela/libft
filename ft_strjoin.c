/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:29:43 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/06/23 17:32:18 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2, int mode)
{
	int		lens1;
	int		lens2;
	char	*str;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!s1 || !s2)
	{
		if (mode == 1 || mode == 3)
			free(s1);
		if (mode == 2 || mode == 3)
			free(s2);
		return (NULL);
	}
	str = ft_calloc(lens1 + lens2 + 1, sizeof(char));
	if (!str)
	{
		if (mode == 1 || mode == 3)
			free(s1);
		if (mode == 2 || mode == 3)
			free(s2);
		return (NULL);
	}
	ft_strlcat(str, s1, lens1 + 1);
	ft_strlcat(str, s2, lens1 + lens2 + 1);
	if (mode == 1 || mode == 3)
		free(s1);
	if (mode == 2 || mode == 3)
		free(s2);
	return (str);
}

// char *nombre;

// nombre = "patata";
// nombre = ft_strjoin(nombre, " con lentejas", 0);
// nombre = ft_strjoin(nombre, " y huevo", 1);
// free(nombre);
