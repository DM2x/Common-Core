/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dm2x <dm2x@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:40:34 by dm2x              #+#    #+#             */
/*   Updated: 2023/03/09 00:18:07 by dm2x             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	i2;
	size_t	len;

	i = 0;
	i2 = 0;
	len = ((ft_strlen(s1)) + (ft_strlen(s2)) + 1);
	newstr = (char *) malloc(len);
	if (!newstr)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i < len)
	{
		newstr[i] = s2[i2];
		i++;
		i2++;
	}
	return (newstr);
}
