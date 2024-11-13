/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 20:51:30 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/05 08:32:16 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *big, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(big) - 1;
	while (start <= end && ft_strchr(set, big[start]))
		start++;
	while (end >= start && ft_strchr(set, big[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	str = ft_substr(big, start, end - start + 1);
	return (str);
}

// int main ()
// {
//  	char *ret = ft_strtrim("", "");
//     printf("%s" , ret);
// }