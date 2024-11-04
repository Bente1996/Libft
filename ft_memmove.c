/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:43:14 by bde-koni          #+#    #+#             */
/*   Updated: 2024/10/16 12:57:47 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *str;
    const char   *s;
    unsigned int    i;
    unsigned char	*temp;

    str = dest;
    s = src;
    i = 0;

	// if (temp == NULL || s == NULL) return (NULL); //toevoegen?

    while ((temp[i] != '\0') && (s[i] != '\0') && (n > 0))
    {
        temp[i] = s[i];
        i++;
        n--;
    }
	while ((temp[i] != '\0') && (str[i] != '\0'))
	{
		str[i] = temp[i];
		i++;
	}
    return (str);
}

int main(void)
{
    char str[50] = "9999999";
    char s[50] = "ffff";

    ft_memmove(str, s, 4);
    printf("%s \n", str);
    return (0);
}