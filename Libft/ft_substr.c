/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:12:15 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/15 16:12:16 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= (ft_strlen(s)))
		substr = malloc(1);
	else
	{
		if (len >= (ft_strlen(s)))
			len = (ft_strlen(s) - start);
		substr = (char *) malloc(len + 1);
		if (!substr)
			return (NULL);
		while (i < len)
		{
			substr[i] = s[start + i];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
