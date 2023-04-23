/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:46:26 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/23 13:46:29 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		node = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
