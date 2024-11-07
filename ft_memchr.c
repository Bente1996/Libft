/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:33:29 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/06 19:32:50 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned int    i;
    const char  *str;
    unsigned char   C;
    unsigned char*  ptr;

    str = s;
    C = c;
    i = 0;
	if (str == NULL) //toegevoegd, nu extra error
		return (NULL);
    while(n > 0)
    {
        i++;
        if(str[i] == C)
        {
            ptr = (unsigned char *)&str[i];
            return(ptr);
        }
    }
    return(NULL);
}

// int main(void)
// {
//     char    str[50] = "the first instance of c";

//     printf("%s \n", (char   *)ft_memchr(str, 'i', 50));
//     return(0);
// }

       //The  memchr()  function  scans  the  initial n bytes of the memory area
      // pointed to by s for the first instance of c.  Both c and the  bytes  of
       //the memory area pointed to by s are interpreted as unsigned char.

        //The  memchr()  and memrchr() functions return a pointer to the matching
       //byte or NULL if the character does not occur in the given memory area.

