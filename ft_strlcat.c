/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:05 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/01/17 13:47:44 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (dstsize += srclen);
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < dstsize -1 && dst != src)
	{
		dst[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (srclen);
}
/*

int main(void) 
{
    char destino[6] = "Hola, ";
    const char *fuente = "mundo que pasa con tu royo"; 
    
    size_t longitud_total = ft_strlcat(destino, fuente, sizeof(destino));

    printf("Cadena resultante: %s\n", destino);
    printf("Longitud total: %zu\n", longitud_total);

    return 0;
}*/
