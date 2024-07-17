/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendia- <mmendia-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:18:03 by mmendia-          #+#    #+#             */
/*   Updated: 2024/06/17 16:08:23 by mmendia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int nbr)
{
	int	count;

	count = 0;
	if (nbr)
	{
		if (nbr <= 0)
		{
			nbr = nbr * (-1);
			count++;
		}
		while (nbr)
		{
			nbr = nbr / 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}

static char	*ft_fill(char *str, int len, int nbr)
{
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr)
	{
		str[len] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	nbr = n;
	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		ft_strlcpy (str, "-2147483648", len + 1);
	else
		str = ft_fill(str, len, nbr);
	return (str);
}

/*int main ()
{
	int s = 12345;
	ft_itoa(s);
	printf("%s", ft_itoa(s));
	return (0);
}*/
