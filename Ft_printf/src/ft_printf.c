/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:18:18 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/06/27 11:10:52 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*print_pointer(unsigned long long num, int *slenght)
{
	char	*str;

	str = NULL;
	if (num == 0)
		*slenght += ft_putstr("(nil)");
	else
	{
		*slenght += ft_putstr("0x");
		str = ft_gethexstr(num, HEXMIN);
	}
	return (str);
}

static void	print_conversions(char c, va_list argm, int *slenght)
{
	char	*str;

	str = NULL;
	if (c == 'c')
		*slenght += ft_putchar(va_arg(argm, int));
	else if (c == 's')
		*slenght += ft_putstr(va_arg(argm, char *));
	else if (c == 'p')
		str = print_pointer(va_arg(argm, unsigned long long), slenght);
	else if (c == 'd' || c == 'i')
		str = ft_getintstr(va_arg(argm, int));
	else if (c == 'u')
		str = ft_getintstr(va_arg(argm, unsigned int));
	else if (c == 'x')
		str = ft_gethexstr(va_arg(argm, unsigned int), HEXMIN);
	else if (c == 'X')
		str = ft_gethexstr(va_arg(argm, unsigned int), HEXMAX);
	else if (c == '%')
		*slenght += write(1, "%", 1);
	if (str)
		*slenght += ft_putstr(str);
}

int	ft_printf(const char *str, ...)
{
	va_list	argm;
	int		slenght;

	va_start(argm, str);
	slenght = 0;
	while (*str)
	{
		if (*str == '%' && *(str++))
		{
			print_conversions(*str, argm, &slenght);
		}
		else
			slenght += ft_putchar(*str);
		str++;
	}
	va_end(argm);
	return (slenght);
}
