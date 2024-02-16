/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:26:32 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/07 21:39:49 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				signo;
	unsigned int	number;

	i = 0;
	signo = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		signo = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	return (number * signo);
}
/*

int	main()
{
	char str[] = "123--125adf586";
		printf("%d\n", ft_atoi(str));
		printf("original %d\n", atoi(str));
				return (0);
}*/