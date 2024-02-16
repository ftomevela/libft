/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:50:33 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/14 19:36:57 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	abuscar;

	i = 0;
	abuscar = c;
	while (s[i] != '\0')
	{
		if (s[i] != abuscar)
			i++;
		else
			return ((char *)&s[i]);
	}
	if (abuscar == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main ()
{
	char *palabra = NULL;
	int c = 'a';
	ft_strchr(palabra, c);

}*/