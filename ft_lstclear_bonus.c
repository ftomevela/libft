/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftome-ve <ftome-ve@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:54:09 by ftome-ve          #+#    #+#             */
/*   Updated: 2024/02/16 23:27:43 by ftome-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*prox;

	temp = *lst;
	while (temp != NULL)
	{
		prox = temp->next;
		(*del)(temp->content);
		free(temp);
		temp = prox;
	}
	*lst = NULL;
}
