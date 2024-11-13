/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 22:32:41 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/30 16:50:40 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	a;
	void	*p;

	a = nmemb * size;
	p = malloc(a);
	if (!p)
		return (NULL);
	else
		ft_bzero(p, a);
	return (p);
}
