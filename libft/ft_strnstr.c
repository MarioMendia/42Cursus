/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:38:48 by mmendia-          #+#    #+#             */
/*   Updated: 2024/04/25 11:42:03 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle [j] && needle[j] && i + j < len)
		{
			j++;
			if (needle [j] == '\0')
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
