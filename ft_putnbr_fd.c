/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:55:22 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/05 15:20:06 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <unistd.h>
#include <stdio.h>

void ft_putnbr_fd(int n, int fd)
{
    long    N; //for when lowest int turns positive
    char    c;

    c = '-';
    N = (long)n;
    if (N < 0)
    {
        write(fd, &c, 1); //put '-' when negative
        N *= -1; //make positive
    }
    if (N > 10)
        ft_putnbr_fd(N / 10, fd);
    c = (N % 10) + 48;
    write(1, &c, 1);
}

// int main(void)
// {
//     int n = 0;
//     int fd = 1;

//     ft_putnbr_fd(n, fd);
//     printf("\n");
//     return (0);
// }