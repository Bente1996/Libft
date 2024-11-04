/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:28:04 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/04 18:44:54 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *str;
    const char  *s;
    unsigned int    i; 

    str = dest;
    s = src;
    i = 0;

    while ((s[i] != '\0') && (str[i] != '\0') && (n > 0)) //mag src langer zijn dan dest??
    {
        str[i] = s[i];
        i++;
        n--;
    }
    return (str);
}

// int main(void)
// {
//     char str[55] = "KOOPOOPOOP";
//     char s[55] = "3333333333333";
//     int hoi[50] = {42, 535, 643, 5353};

//     ft_memcpy(hoi, s, 5);
//     printf("%s \n", str);
//     return (0);
// }