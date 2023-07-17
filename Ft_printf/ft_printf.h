/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-ma <ddias-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:21:35 by ddias-ma          #+#    #+#             */
/*   Updated: 2023/07/17 13:20:05 by ddias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr_base(long long nbr, char *base);
int	ft_putnbr_unsigned(unsigned int nbr, char *base);
int	ft_putstr(char *str);
int	ft_printf(const char *input, ...);
int	ft_strlen(const char *str);
int	ft_printadr(unsigned long long ptr, char *base);

#endif
