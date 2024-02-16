/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:44 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/07 21:35:38 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*source1;
	const char	*source2;

	i = 0;
	source1 = s1;
	source2 = s2;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (source1[i] != source2[i])
			return ((unsigned char) source1[i] - (unsigned char) source2[i]);
		i++;
	}
	return ((unsigned char) source1[i] - (unsigned char) source2[i]);
}
