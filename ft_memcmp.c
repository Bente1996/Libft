/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: frog <frog@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 18:18:56 by bde-koni      #+#    #+#                 */
/*   Updated: 2024/11/15 17:09:19 by frog          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	n2;
	const char		*str1;
	const char		*str2;
	size_t			i;

	n2 = n;
	str1 = s1;
	str2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && (n2 > 1))
	{
		i++;
		n2--;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
// int main(void)
// {
//     const char s1[50] = "baapa";
//     const char s2[50] = "baama";
//
//     printf("%d \n", ft_memcmp(s1, s2, 3));
//     return(0);
// }
//
// FUNCTION: compares the first n bytes of the memory areas s1 and s2.
