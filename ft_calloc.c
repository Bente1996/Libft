/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:47:13 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/04 18:44:01 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    ptr = malloc(nmemb * size);
	if (ptr == NULL)
    {
		return(ptr);
    }
	ft_bzero(ptr, nmemb * size);
    {
	    return(ptr);
    }
}

// int main(void)
// {
//     char str[50] = "naar nul brengen";

//     ft_calloc(2, 1);
//     printf("%s", );
//     return(0);
// }

//The calloc() function allocates memory for an array of  nmemb  elements
//of  size bytes each and returns a pointer to the allocated memory.  
