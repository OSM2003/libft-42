/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:10:48 by oalananz          #+#    #+#             */
/*   Updated: 2024/10/14 14:16:15 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *head = ft_lstnew("Hello");
//     ft_lstadd_front(&head, ft_lstnew("World"));

//     t_list *current = head;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return (0);
// }