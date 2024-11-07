/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:28:04 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/06 19:10:20 by bde-koni         ###   ########.fr       */
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
	if (str == NULL || s == NULL)
		return (str);
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

//     ft_memcpy(dest, src, 3);
//     printf("%s \n", dest);
//     return (0);
// }