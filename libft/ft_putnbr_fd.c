/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalananz <oalananz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:13:00 by oalananz          #+#    #+#             */
/*   Updated: 2024/09/07 14:14:38 by oalananz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	help(int nb, int i, int fd)
{
	char	c[11];

	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		i++;
		nb /= 10;
	}
	while (i-- != 0)
		write(fd, &c[i], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -1 * n;
	}
	help(n, i, fd);
}
