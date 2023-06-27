/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:21:35 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/06/27 11:07:30 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXMIN "0123456789abcdef"
# define HEXMAX "0123456789ABCDEF"
# define DECIMAL "0123456789"

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_strlen(const char *str);
int		ft_gethexlen(unsigned long long n);
int		ft_getintlen(long n);
int		ft_printf(const char *str, ...);
char	*ft_getintstr(long n);
char	*ft_gethexstr(unsigned long long num, char *base);
int		ft_putstr(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrev(char *str);

#endif
