/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:15:13 by mmendia-          #+#    #+#             */
/*   Updated: 2024/06/20 09:37:48 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char chr, va_list ap)
{
	int	count;

	count = 0;
	if (chr == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (chr == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (chr == 'p')
		count += ft_print_ptr(va_arg(ap, unsigned long long));
	else if (chr == 'd')
		count += ft_putdigit((long)va_arg(ap, int), 10, chr);
	else if (chr == 'i')
		count += ft_putdigit((long)va_arg(ap, int), 10, chr);
	else if (chr == 'u')
		count += ft_putdigit((long)va_arg(ap, unsigned int), 10, chr);
	else if (chr == 'x')
		count += ft_putdigit((long)va_arg(ap, unsigned int), 16, chr);
	else if (chr == 'X')
		count += ft_putdigit((long)va_arg(ap, unsigned int), 16, chr);
	else
		count += write(1, &chr, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start (ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_format(*str, ap);
		}
		else
			count += write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (count);
}

/*int	main(void)
{
	ft_printf("%c, %s, %p, %p, %d, %i, %u, %x, %X\n", 'a',
	 "hello", 0, 0, 42, -100, 4242, -1, -1);
	printf("%c, %s, %p, %p, %d, %i, %u, %x, %X\n", 'a',
	 "hello", 0, 0, 42, -100, 4242, -1, -1);
}*/
