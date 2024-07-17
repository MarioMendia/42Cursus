/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:50:46 by mmendia-          #+#    #+#             */
/*   Updated: 2024/07/01 10:46:05 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
//# include <stdio.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_print_ptr(unsigned long long ptr);
int	ft_putdigit(long int num, int base, char c);

#endif
