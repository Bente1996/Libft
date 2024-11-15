/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: frog <frog@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/11 18:28:04 by bde-koni      #+#    #+#                 */
/*   Updated: 2024/11/15 17:11:21 by frog          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	const char		*s;
	unsigned int	i;

	str = dest;
	s = src;
	i = 0;
	if (str == NULL && s == NULL)
		return (NULL);
	while (n > 0)
	{
		str[i] = s[i];
		i++;
		n--;
	}
	return (str);
}

// int main(void)
// {
//     char dest[55] = "";
//     char src[55] = "44444";
//
//     ft_memcpy(dest, src, 3);
//     printf("%s \n", dest);
//     return (0);
// }
//
// FUNCTION: copies memory for n bytes
