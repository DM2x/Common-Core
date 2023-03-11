/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dm2x <dm2x@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 01:40:17 by dm2x              #+#    #+#             */
/*   Updated: 2023/03/11 14:14:38 by dm2x             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char const *set, char s1)
{
	while (*set)
	{
		if (*set == s1)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		start;
	int		len;
	int		i;

	start = 0;
	len = ft_strlen(s1) - 1;
	while (s1[start] && check_set(set, s1[start]))
		start++;
	while (len > start && check_set(set, s1[len]))
		len--;
	newstr = (char *)malloc((len - start) + 2);
	if (!newstr)
		return (NULL);
	i = 0;
	while (start <= len)
		newstr[i++] = s1[start++];
	newstr[i] = '\0';
	return (newstr);
}
