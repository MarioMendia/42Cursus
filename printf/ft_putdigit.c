/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:33:41 by mmendia-          #+#    #+#             */
/*   Updated: 2024/07/01 10:36:03 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit(long int num, int base, char c)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (c == 'X')
		symbols = "0123456789ABCDEF";
	if (num < 0)
	{
		write (1, "-", 1);
		return (ft_putdigit(-num, base, c) + 1);
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		count += ft_putdigit(num / base, base, c);
		return (count + ft_putdigit(num % base, base, c));
	}
}
