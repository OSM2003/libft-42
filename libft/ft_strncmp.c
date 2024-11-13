/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:50:15 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/29 18:14:27 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}
/*int main()
{
	char str1[] = "abCd";
	char str2[] = "abcd";
	int x = ft_strncmp(str1 , str2, 10);
	printf("%d" , x);
}*/
