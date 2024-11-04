/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:51:41 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/04 17:41:14 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{	
    char             *substr;
    unsigned int    i;

    i = 0;
    while((s[start + i] != '\0') && (len > 0))
    {
        i++;
        len--;
    }
    substr = malloc(i + 1);
    if(substr == NULL)
    {
        return(substr);
    }
    substr[i] = '\0';
    i--;
    while(i > 0)
    {
        substr[i] = s[start + i];
        i--;
    }
    substr[0] = s[start];
    return(substr);
}

// int main(void)
// {
//     char s[50] = "hallo dit is de hele string hihi haha";

//     printf("%s \n", ft_substr(s, 8, 4));
//     return(0);
// }

//Allocates (with malloc(3)) and returns a substring
//from the string ’s’.
//The substring begins at index ’start’ and is of
//maximum size ’len’.

//Parameters s: The string from which to create the substring.
//start: The start index of the substring in the
//string ’s’.
//len: The maximum length of the substring.
//Return value The substring.
//NULL if the allocation fails.