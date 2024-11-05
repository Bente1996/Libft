/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:35:00 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/05 16:40:28 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL || set == NULL)
		return(NULL);
	while(ft_strchr(set, s1[start]) && s1[start] != '\0') //move through s1 as long as s1[i] is a character of the string 'set'
	{
		start++;
	} //now we know how many characters have to be removed at the start
	if (s1[start] == '\0')
		return(NULL); 
	end = ft_strlen(s1);
	while(ft_strchr(set, s1[end])) //move through s1 as long as s1[j] is a character of the string 'set'
	{
		end--;
	} //now we know how many characters have to be removed at the end
	return(ft_substr(s1, start, end - start + 1)); //make a substring from s1 while allocating necessary space with malloc
										 //we start the string at i
										 //the trimmed string has the length of j - i and add 1 for the '\0' 
}

// int	main(void)
// {
// 	char	s1[50] = "deze gaan weg 5555555555 deze gaan weg 5555555 deze gaan weg";
// 	char	set[50] = "gaan deze weg";

// 	printf("%s \n", ft_strtrim(s1, set));
// 	return(0);
// }


// {
// 	size_t	start;
// 	size_t	end;
// 	size_t	i;

// 	if (!s1 || !set)
// 		return (NULL);
// 	start = 0;
// 	end = ft_strlen(s1);
// 	i = 0;
// 	while (ft_strchr(set, s1[start]) && s1[start]) //strchr returns pointer to chosen character in string s1, zolang het eerste/laatste deel vd string
//                                                    //de characters bevat van set op dezelfde volgorde doorgaan anders stoppen
// 		start++;
// 	if (s1[start] == '\0')
// 		return (ft_strdup(""));
// 	while (ft_strchr(set, s1[end]))
// 		end--;
// 	return (ft_substr(s1, start, end - start + 1)); 
// }
