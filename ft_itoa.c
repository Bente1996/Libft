/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:39:31 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/04 18:44:39 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include <libft.h>

 int lencheck(long n)
{
    int len;

    len = 0;
    if (n < 0)
    {
        n *= -1; //we need positive amount of characters
        len++;
    }
    while (n > 0)
    {
        n /= 10; //every /10 stands for a character
        len++;
    }
    return(len);
}

char *ft_itoa(int n)
{
    char    *s;
    int	len; // or size_t?
    long    N; //for when lowest int turns positive

    //if (n == 0)
    //return (ft_strdup("0");
    N = (long)n;
    len = lencheck(N); //check how many characters s will have
    s = malloc((len + 1) * sizeof(char));
    if (s == NULL)  //?
    return (NULL);
    if (N < 0)
    {
        s[0] = '-'; //put '-' when negative
        N *= -1; //make positive
    }
    s[len] = '\0';
    while (N > 0)
    {
        len--; //move one character down
        s[len] = (N % 10) + 48; //fills end string with last digit and converts to character
        N /= 10; //removes last digit from N
    }
    return(s);
}

// int main(void)
// {
//     int n = -2147483648;

//     printf("%s \n", ft_itoa(n));
//     return(0);
// }
