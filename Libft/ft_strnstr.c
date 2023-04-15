/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:11:55 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/15 16:11:55 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		i2 = 0;
		if (big[i] == little[i2])
		{
			while (little[i2] && (i + i2) < len && little[i2] == big[i + i2])
				i2++;
			if (little[i2] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
