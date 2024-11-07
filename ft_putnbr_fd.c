/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:55:22 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/06 19:07:25 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;
	char	c;

	n2 = (long)n;
	c = '-';
	if (n2 < 0)
	{
		write(fd, &c, 1);
		n2 *= -1;
	}
	if (n2 > 10)
		ft_putnbr_fd(n2 / 10, fd);
	c = (n2 % 10) + 48;
	write(fd, &c, 1);
}

// int main(void)
// {
//     int n = 0;
//     int fd = 1;
//     ft_putnbr_fd(n, fd);
//     printf("\n");
//     return (0);
// }