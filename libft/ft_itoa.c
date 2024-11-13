/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:02:15 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/07 14:14:17 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		n = -n;
		x++;
	}
	while (n)
	{
		x++;
		n /= 10;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(ft_intlen(n) + 1);
	if (!s)
		return (NULL);
	i = ft_intlen(n);
	s[i] = '\0';
	i--;
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n)
	{
		s[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	return (s);
}

// int main()
// {
//     char *str = ft_itoa(8124);
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }
