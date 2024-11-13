/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 08:34:50 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/07 14:22:59 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *s, char c)
{
	int	p;

	p = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			p++;
			while (*s && *s != c)
				s++;
		}
	}
	return (p);
}

static char	**free_split(char **split)
{
	char	**temp;

	temp = split;
	if (split)
	{
		while (*temp)
		{
			free(*temp);
			temp++;
		}
		free(split);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		a;

	i = 0;
	a = 0;
	j = 0;
	str = malloc(sizeof(char *) * (ft_count_words((char *)s, c) + 1));
	if (!str)
		return (NULL);
	while (a < ft_count_words((char *)s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		str[a] = ft_substr(s, j, i - j);
		if (!str[a])
			return (free_split(str));
		a++;
	}
	str[a] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char **result;
// 	int i = 0;

// 	result = ft_split("        ", ' ');
// 	if (result)
// 	{
// 		while (result[i] != NULL)
// 		{
// 			printf("%s\n", result[i]);
// 			free(result[i]); // Free each substring after printing
// 			i++;
// 		}
// 		free(result); // Free the array of substrings
// 	}

// 	return (0);
// }
