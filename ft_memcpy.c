/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:01:33 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/05 23:56:24 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*destino;
	const char	*origen;

	destino = dst;
	origen = src;
	i = 0;
	if (!destino && !origen)
		return (0);
	while (i < n)
	{
		destino[i] = origen[i];
		i++;
	}
	return (dst);
}
