/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:09:41 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/07 14:09:46 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	l = ft_strlen((char *)little);
	while (*big != '\0' && len >= l)
	{
		if (ft_strncmp(big, little, l) == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
