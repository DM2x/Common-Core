/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: dm2x <dm2x@student.42.fr>                  +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/03/08 01:19:45 by dm2x              #+#    #+#             */
/*   Updated: 2023/03/08 01:19:45 by dm2x             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	dest += dest_len;
	while (*src && i < (size - dest_len - 1))
	{
		*(dest++) = *(src++);
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
