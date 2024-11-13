/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:26:31 by oalananz          #+#    #+#             */
/*   Updated: 2024/10/14 17:42:53 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int main()
// {
//     t_list *lst;
//     lst = malloc(sizeof(t_list));
//     if (!lst)
//         return (NULL);
//     lst->content = 5;
//     lst->next = NULL;
//     t_list *st;
//     st = malloc(sizeof(t_list));
//     if (!st)
//         return (NULL);
//     st->content = 50;
//     st->next = NULL;
//     lst->next = st;

//     t_list *temp;
//     temp=lst;
//     while(temp != NULL)
//     {
//         printf("%d",temp -> content);
//         temp=temp->next;
//     }
// }

// t_list *create(int n)
// {
//     int i=0;
//     t_list *head = NULL;
//     t_list *temp =NULL;
//     t_list *p = NULL;

//     while (i < n)
//     {
//         temp = malloc(sizeof(t_list));
//         scanf("%s", &(temp->content));
//         temp->next=NULL;
//         if(head == NULL)
//             head = temp;
//         else
//         {
//             p = head;
//             while (p->next != NULL)
//             {
//                 p = p->next;
//             }
//             p->next = temp;
//         }
//         i++;
//     }
//     return (head);
// }