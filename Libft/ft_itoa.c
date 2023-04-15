/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:09:26 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/04/15 16:09:28 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	n1;

	len = ft_len(n);
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	n1 = n;
	str[len] = '\0';
	if (n1 == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 *= -1;
	}
	while (n1)
	{
		str[len -1] = (n1 % 10) + '0';
		len--;
		n1 /= 10;
	}
	return (str);
}
