/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:39:21 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/05 15:20:10 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// int main(void)
// {
//     char    s[50] = "strong \n";
//     int fd = 1;
    
//     ft_putstr_fd(s, fd);
//     return (0);
// }