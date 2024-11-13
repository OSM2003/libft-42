/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:45:15 by oalananz          #+#    #+#             */
/*   Updated: 2024/10/14 14:09:18 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int main()
// {
//     char *str = "Hello, World!";
//     t_list *lst = ft_lstnew(x);
//     printf("%s\n", (char *)lst->content);
//     return (0);
// }
