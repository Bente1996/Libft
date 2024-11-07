/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:43:14 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/07 14:01:39 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n) //temporary string?!?!?!
{
    unsigned char *str;
    const char   *s;
    size_t   i;

    str = dest;
    s = src;
    i = 0;

	if (str == NULL || s == NULL)
		return (NULL);
    while (n > 0)
    {
		while ((size_t)(str - (unsigned char *)s) < n)
		{
			
		}
        	str[i] = s[i];
        	i++;
        	n--;
    }
    return (str);
}

// int main(void)
// {
//     char str[50] = "777771234569999999999";
// //     char s[50] = "vlaflip";
//     ft_memmove(&str[5], str ,7);

//     printf("%s \n", str);
//     return (0);
// }