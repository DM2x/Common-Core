/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:08:11 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/23 13:09:59 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	end_node = ft_lstlast(*lst);
	end_node->next = new;
}
