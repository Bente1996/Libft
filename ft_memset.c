/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:39:52 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/05 18:39:59 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = (unsigned char) c;
		str++;
		n--;
	}
	return (s);
}

// int main(void)
// {
//     char str[50] = "Hello World";

// 	ft_memset(str, '#', 9);
//     printf("%s \n", str);
//     return (0);
// }