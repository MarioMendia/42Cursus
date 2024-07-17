/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 20:11:11 by mmendia-          #+#    #+#             */
/*   Updated: 2024/06/20 09:36:55 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putptr(unsigned long long ptr)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (ptr >= 16)
		count += ft_putptr(ptr / 16);
	ft_putchar(symbols[ptr % 16]);
	count++;
	return (count);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		count += ft_putptr(ptr);
	}
	return (count);
}
