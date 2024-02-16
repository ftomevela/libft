/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:37:52 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/13 01:01:34 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(long int num)
{
	int	size;

	size = 0;
	if (num < 0)
		size++;
	while (num)
	{
		num = num / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	num;
	int		size;
	char	*str;
	char	caracter;

	if (n == 0)
		return (ft_strdup("0"));
	num = (long)n;
	size = ft_size(num);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	str[size] = '\0';
	while (num > 0)
	{
		caracter = '0' + (num % 10);
		str [--size] = caracter;
		num = num / 10;
	}
	return (str);
}
