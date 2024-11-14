/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:35:00 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/14 18:52:24 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	if (s1[start] == '\0')
		return (ft_strdup("\0"));
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

// int	main(void)
// {
// 	char	s1[50] = "deze gaan weg 5555555555 
//deze gaan weg 5555555 deze gaan weg";
// 	char	set[50] = "gaan deze weg";

// 	printf("%s \n", ft_strtrim(s1, set));
// 	return(0);
// }