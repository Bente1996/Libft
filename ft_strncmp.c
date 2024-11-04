/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:20:44 by bde-koni          #+#    #+#             */
/*   Updated: 2024/10/22 20:52:37 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int    i;

    i = 0;
    while((s1[i] == s2[i]) && (n > 1) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        i++;
        n--;
    }
    return(s1[i] - s2[i]);
}

int main(void)
{
    char    s1[50] = "baap";
    char    s2[50] = "baam";

    printf("%d \n", ft_strncmp(s1, s2, 3));
    return(0);
}

       //• 0, if the s1 and s2 are equal;

       //• a negative value if s1 is less than s2;

       //• a positive value if s1 is greater than s2.

       //The strncmp() function is similar, except it compares  only  the  first
       //(at most) n bytes of s1 and s2.
