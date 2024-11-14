/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:51:17 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/13 16:59:12 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[i] == '\0' || big == little)
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		while ((big[i + j] != '\0') && ((i + j) < len) \
		&& (big[i + j] == little[j]))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (needle[j] == '\0' || !needle || haystack == needle)
// 		return ((char *)haystack);
// 	while (haystack[i] && i < len)
// 	{
// 		j = 0;
// 		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
// 		{
// 			if (needle[j + 1] == '\0')
// 				return ((char *)haystack + i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

// int main(void)
// {
//     const char big[50] = "dit en niet is de grote en niet de kleine string";
//     const char little[50] = "en niet";

//     printf("%p \n", ft_strnstr(big, little, 20));
//     printf("%s \n", ft_strnstr(big, little, 20));
//     return(0);
// }

//the function locates the first occurence of the 
//'\0'ed string 'little' IN the string 'big', 
//where not more than len characters are searched, characters that
// appear after a '\0' are not searched

//if 'little' is empty 'big' is returned
//if 'little' accors nowhere in 'big', NULL is returned
//otherwise a pointer to the first character of the first occurence 
//of 'little' is returned