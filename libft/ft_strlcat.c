/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:02:03 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/29 18:04:41 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	x;
	size_t	i;
	size_t	j;
	size_t	a;

	x = ft_strlen((char *)src);
	n = ft_strlen((char *)dst);
	a = size - n - 1;
	j = 0;
	i = 0;
	if (size <= n)
		return (size + x);
	while (dst[i] != '\0')
	{
		i++;
	}
	while (src[j] && j < a)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (x + n);
}
// int main(void)
// {
//     char dst[] = "there is no stars in the sky";
//     const char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//     size_t size = sizeof(dst);

//     size_t result = ft_strlcat(dst, src, size);
//     printf("Resulting string: %s\n", dst);
//     printf("Total length of the string that was tried to create: %zu\n",
//
//     //	result);

//     return (0);
// }
