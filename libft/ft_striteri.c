/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:56:38 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/05 15:02:13 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void increment_char(unsigned int index, char *ch) {
//     *ch = *ch + index;
// }

// int main() {
//     char str[] = "abcde";  // Original string

//     ft_striteri(str, increment_char);

//     printf("Modified string: %s\n", str);  // Expected output: "acegi"
//     return (0);
// }