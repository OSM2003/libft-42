/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:44:26 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/29 19:53:35 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		x;
	const char	*ptr;

	x = ft_strlen((char *)s);
	ptr = s + x;
	while (ptr >= s)
	{
		if (*ptr == (char)c)
		{
			return ((char *)ptr);
		}
		ptr--;
	}
	if (c == '\0')
		return ((char *)(s + x));
	return (NULL);
}
// int main(void)
// {
//     const char *str = "Hello, World!";
//     char ch = 'o';

//     char *result = ft_strrchr(str, ch);
//     if (result != NULL)
//     {
//         printf("Last occurrence of '%c': %s\n", ch, result);
//     }
//     else
//     {
//         printf("Character '%c' not found.\n", ch);
//     }

//     // Test for the null terminator
//     result = ft_strrchr(str, '\0');
//     if (result != NULL)
//     {
//         printf("Last occurrence of '\\0': %s\n", result);
//     }
//     else
//     {
//         printf("Null terminator not found.\n");
//     }

//     return (0);
// }