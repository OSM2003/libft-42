/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:14:20 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/07 14:09:20 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	val;

	val = (unsigned char)c;
	str = s;
	while (n)
	{
		*str++ = val;
		n--;
	}
	return (s);
}
