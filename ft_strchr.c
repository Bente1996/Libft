/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:54:01 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/13 18:34:19 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			s += i;
			return ((char *)s);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		s += i;
		return ((char *)s);
	}
	return (NULL);
}

// int main(void)
// {
//     char    s[50] = "hahahh7aha"; 

//     printf("%p \n", ft_strchr(s, '7'));
//     printf("%s \n", ft_strchr(s, '7')); 
//call function again but start at s[i] = c ^
//     return (0);
// }