/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:06:23 by mmendia-          #+#    #+#             */
/*   Updated: 2024/05/13 17:42:27 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == 0)
	{
		p = malloc(1 * sizeof(char));
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	i = 0;
	l = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL && l > i)
		i++;
	while (ft_strrchr(set, s1[l - 1]) != NULL && l > i)
		l--;
	p = malloc(sizeof(char) * (l - i) + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s1[i], l - i + 1);
	return (p);
}
