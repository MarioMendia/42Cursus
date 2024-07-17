/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:51:11 by mmendia-          #+#    #+#             */
/*   Updated: 2024/06/17 11:20:22 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_smalloc(char **s_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	s_v[position] = malloc(buffer);
	if (s_v[position] == NULL)
	{
		while (i < position)
		{
			free(s_v[i++]);
		}
		free(s_v);
		return (1);
	}
	return (0);
}

static int	ft_count(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != '\0' && str[i + 1] != c)
			count++;
		i++;
	}
	if (str[0] != c && str[0] != '\0')
		count++;
	return (count);
}

static int	ft_fill(char **s_v, const char *s, char c)
{
	size_t	len;
	size_t	k;

	k = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (ft_smalloc(s_v, k, len + 1))
				return (1);
		}
		if (len)
			ft_strlcpy(s_v[k], s - len, len +1);
		k++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	char	**s_v;

	if (!s)
		return (NULL);
	i = 0;
	i = ft_count (s, c);
	s_v = malloc(sizeof(char *) * (i + 1));
	if (!s_v)
		return (NULL);
	s_v[i] = NULL;
	if (i == 0)
		return (s_v);
	if (ft_fill(s_v, s, c))
		return (NULL);
	return (s_v);
}

/*int main	(void)
{
	int i = 0;
	const char	*str = ",hello,world,,1";
	char **split_str = ft_split(str, ',');
	while (split_str[i])
	{
		printf("%s\n", split_str[i]);
		i++;
	}
	return (0);
}*/
