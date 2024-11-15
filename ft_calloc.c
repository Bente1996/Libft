/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: frog <frog@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:47:13 by bde-koni      #+#    #+#                 */
/*   Updated: 2024/11/15 17:13:21 by frog          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, nmemb * size);
		return (ptr);
}

// int main(void)
// {
//     char str[50] = "naar nul brengen";
//
//     ft_calloc(2, 1);
//     printf("%s", );
//     return(0);
// }
//
// FUNCTION: allocates and bzero's memory for an array of  nmemb  elements
// of size bytes each and returns a pointer to the allocated memory
