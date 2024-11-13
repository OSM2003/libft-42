/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:36:20 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/07 14:10:45 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	x;
	int	s;

	x = 0;
	s = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '+' && *(nptr + 1) != '-')
		nptr++;
	if (*nptr == '-')
	{
		s *= -1;
		nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		x *= 10;
		x += *nptr - 48;
		nptr++;
	}
	x *= s;
	return (x);
}
