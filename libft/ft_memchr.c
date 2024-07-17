/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:27:04 by mmendia-          #+#    #+#             */
/*   Updated: 2024/04/23 12:57:31 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	c = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == c && (str[i] != '\0' || c == '\0'))
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
