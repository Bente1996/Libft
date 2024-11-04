/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:12:02 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/04 18:46:08 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
		i++;

	while(s2[j] != '\0')
		j++;
		
	s3 = malloc(i + j + 1);
	if(s3 == NULL)
	{
		return(s3);
	}
	i = 0;
	j = 0;
	k = 0;
	while(s1[i] != '\0')
	{
		s3[k] = s1[i];
		i++;
		k++;
	}

	while(s2[j] != '\0')
	{
		s3[k] = s2[j];
		j++;
		k++;
	}
	s3[k] = '\0';
	return(s3);
}

// int	main(void)
// {
// 	char s1[50] = "blablabla";
// 	char s2[50] = "3333333333";

// 	printf("%s \n", ft_strjoin(s1, s2));
// 	return(0);
// }



//Function name ft_strjoin
//Prototype char *ft_strjoin(char const *s1, char const *s2);
//Turn in files -
//Parameters s1: The prefix string.
//s2: The suffix string.
//Return value The new string.
//NULL if the allocation fails.
//External functs. malloc
//Description Allocates (with malloc(3)) and returns a new
//string, which is the result of the concatenation
//of ’s1’ and ’s2’.