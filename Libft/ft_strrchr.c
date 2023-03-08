/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dm2x <dm2x@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:39:15 by dm2x              #+#    #+#             */
/*   Updated: 2023/03/08 01:39:15 by dm2x             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len != 0 && (char)c != s[len])
		len--;
	if (s[len] == (char)c)
		return ((char *)s[len]);
	return (NULL);
}
