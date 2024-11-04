/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:51:17 by bde-koni          #+#    #+#             */
/*   Updated: 2024/10/22 19:36:51 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    unsigned int    i;
    unsigned int    j;
    char*   ptr;

    i = 0;
    j = 0;
    if(little == NULL || little[i] == '\0')
    {
        return (char *)big;
    }
    
    while((big[j] != '\0') && (len > 0))
    {
        if(big[j] == little[i])
        {
            ptr = (char *)&big[j];

            while((little[i] != '\0') && (big[j] != '\0') && (len > 0) && (big[j] == little[i]))
            {
                i++;
                len--;
                j++;
            }
            if(little[i] == '\0')
            {
                return (ptr);
            }
        }
        j++;
        i = 0;
    }
    return (NULL);
}

int main(void)
{
    const char big[50] = "dit en niet is de grote en niet de kleine string";
    const char little[50] = "en niet";

    printf("%p \n", ft_strnstr(big, little, 20));
    printf("%s \n", ft_strnstr(big, little, 20));
    return(0);
}

//the function locates the first occurence of the '\0'ed string 'little' IN the string 'big', 
//where not more than len characters are searched, characters that appear after a '\0' are not searched

//if 'little' is empty 'big' is returned
//if 'little' accors nowhere in 'big', NULL is returned
//otherwise a pointer to the first character of the first occurence of 'little' is returned