/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:07:55 by mmendia-          #+#    #+#             */
/*   Updated: 2024/04/26 17:40:13 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	if (dst == NULL && src == NULL)
		return (0);
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize <= d)
		return (dstsize + s);
	else
	{
		i = 0;
		while (src[i] && d + i < dstsize - 1)
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
	}
	return (d + s);
}
