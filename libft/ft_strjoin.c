/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:21:13 by oalananz          #+#    #+#             */
/*   Updated: 2024/08/30 20:49:52 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*p;

	i = 0;
	p = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1)
			* sizeof(char));
	if (!p)
		return (NULL);
	while (*s2 != '\0' || *s1 != '\0')
	{
		if (*s1 == '\0')
		{
			p[i] = *s2;
			s2++;
		}
		else
		{
			p[i] = *s1;
			s1++;
		}
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
//     char *k = ft_strjoin("osamah ", "ananzeh");
//     printf("%s", k);
// }