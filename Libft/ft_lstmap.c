/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:50:20 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/23 13:50:22 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*nnode;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		nnode = ft_lstnew(f(lst -> content));
		if (!nnode)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, nnode);
		lst = lst -> next;
	}
	return (new_lst);
}
