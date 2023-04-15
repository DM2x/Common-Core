/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:10:59 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/15 16:11:00 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_str(char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s != c && *s)
				s++;
			i++;
		}
	}
	return (i);
}

char	*ft_new_str(const char *s, int start, int end, int len)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = (char *) malloc(len + 1);
	if (!new_str)
		new_str = (char *) malloc(len + 1);
	while (start < end)
		new_str[i++] = s[start++];
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	int		i;
	int		start;
	int		end;

	new_str = (char **)malloc(sizeof(char *) * ((count_str((char *)s, c)) + 1));
	if (!new_str)
		return (NULL);
	start = 0;
	i = 0;
	while (s[start])
	{
		if (s[start] != c && s[start] != '\0')
		{
			end = start;
			while (s[end] != c && s[end])
				end++;
			new_str[i++] = ft_new_str(s, start, end, (end - start));
			start = end;
		}
		else
			start++;
	}
	new_str[i] = '\0';
	return (new_str);
}
