/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:54:04 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/30 20:17:42 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	p = malloc((len + 1) * sizeof(char));
	if (!p || !s)
		return (NULL);
	while (i < len && start < ft_strlen((const char *)s))
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
// int main()
// {
//     char *str = "i just want this part #############";
//  	size_t size = 20;
//  	char *ret = ft_substr(str, 5, size);
//     printf("%s", ret);
// }