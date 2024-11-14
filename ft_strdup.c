/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:05 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/13 18:11:17 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
//     char s[50] = "originele string";

//     printf();
//     return(0);
// }

// The  strdup() function returns a pointer to a new string which is a du‐
// plicate of the string s.  Memory for the new string  is  obtained  with
// malloc(3), and can be freed with free(3)

// On  success,  the strdup() function returns a pointer to the duplicated
// string.  It returns NULL if insufficient memory was available, with er‐
// rno set to indicate the cause of the error.

// 1. Allocates space for a new string, setting the size the same as the
// original string
// 2. Copies the original string into the new allocated space, including 
//the null character (\0)

// If space can’t be allocated, the function returns a NULL pointer.
