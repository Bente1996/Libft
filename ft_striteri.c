/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:28:44 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/05 16:45:29 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <libft.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    if (s == NULL || f == NULL)
        return;
    while (s[i] != '\0')
    {
        f(i, &s[i]); //pass adress, so we can modify the value of s[i]
        i++;
    }
}

// int main(void)
// {
//     return(0);
// }