/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 21:03:56 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/07 21:38:42 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		abuscar;
	const unsigned char	*donde;

	abuscar = (unsigned char)c;
	donde = s;
	while (n-- > 0)
	{
		if (*donde == abuscar)
		{
			return ((void *)donde);
		}
		donde++;
	}
	return (NULL);
}
