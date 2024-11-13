/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:18:45 by oalananz          #+#    #+#             */
/*   Updated: 2024/10/14 14:24:58 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	c = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}

// int main()
// {
//     t_list *lst;
//     lst = ft_lstnew("osamah");
//     int x= ft_lstsize(lst);
//     printf("%d", x);
// }