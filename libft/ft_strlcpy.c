/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:41:22 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/29 12:57:55 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	l;

	n = ft_strlen((char *)src);
	if (size == 0)
		return (n);
	if (n >= size)
		l = size - 1;
	else
		l = n;
	ft_memcpy(dst, src, l);
	dst[l] = '\0';
	return (n);
}
/*int main() {
    char src[] = "Hello, world!";
    char dst[20] = "";

    // Test case 1: size is large enough
    size_t len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Destination: '%s'\n", dst);  // Should print "Hello, world!"
    printf("Source length: %zu\n", len); // Should print 13

    // Test case 2: size is smaller than the source length
    len = ft_strlcpy(dst, src, 5);
    printf("Destination: '%s'\n", dst);  // Should print "Hell"
    printf("Source length: %zu\n", len); // Should print 13
     // Test case 3: size is 0
    len = ft_strlcpy(dst, src, 0);
    printf("Destination: '%s'\n", dst);  // Should print (empty string)
    printf("Source length: %zu\n", len); // Should print 13

    return (0);
}*/
