/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:12:46 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/05 16:52:22 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	int		fd;
	char	buffer[100];

	fd = open("osama.txt", O_CREAT | O_RDWR);
	if (fd == -1)
	{
		printf("error");
		return (1);
	}
	ft_putchar_fd('c', fd);
	close(fd);
	return (0);
}
*/
