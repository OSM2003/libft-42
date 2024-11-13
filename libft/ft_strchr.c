/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:51:19 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/01 18:08:42 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (1)
	{
		if (*p == (char)c)
		{
			return (p);
		}
		if (*p == '\0')
			return (NULL);
		p++;
	}
	return (NULL);
}
