/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:18:56 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/04 18:44:48 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   N;
    const char   *str1;
    const char   *str2;
    unsigned int i;

    N = n;
    str1 = s1;
    str2 = s2;

    i = 0;
    while((str1[i] == str2[i]) && (N > 1) && (str1[i] != '\0') && (str2[i] != '\0'))
    {
        i++;
        N--;
    }
    return((unsigned char)str1[i] - (unsigned char)str2[i]);
}

// int main(void)
// {
//     const char s1[50] = "baapa";
//     const char s2[50] = "baama";

//     printf("%d \n", ft_memcmp(s1, s2, 3)); 
//     return(0);
// }

//The  memcmp()  function compares the first n bytes (each interpreted as
//      unsigned char) of the memory areas s1 and s2.

//      The memcmp() function returns  an  integer  less  than,  equal  to,  or
//      greater than zero if the first n bytes of s1 is found, respectively, to
//      be less than, to match, or be greater than the first n bytes of s2.

//      For a nonzero return value, the sign is determined by the sign  of  the
//      difference  between  the  first  pair of bytes (interpreted as unsigned
//      char) that differ in s1 and s2.

//     If n is zero, the return value is zero.

