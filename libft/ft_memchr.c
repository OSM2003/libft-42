/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:58:11 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/29 20:22:30 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*x;

	i = 0;
	x = (char *)s;
	while (i < n)
	{
		if (*x == (char)c)
		{
			return ((void *)x);
		}
		x++;
		i++;
	}
	return (NULL);
}
