/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:59:51 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/07 21:34:37 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*destino;
	const char	*origen;

	i = len;
	destino = dst;
	origen = src;
	if (origen < destino)
	{
		while (len--)
			destino[len] = origen[len];
	}
	else
	{
		ft_memcpy(destino, origen, i);
	}
	return (dst);
}
