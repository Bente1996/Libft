/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-koni <bde-koni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:19:28 by bde-koni          #+#    #+#             */
/*   Updated: 2024/11/06 19:19:10 by bde-koni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(const char *nptr)
{
    unsigned int    i;
    int    sign;
    int NPTR;

    i = 0;
    sign = 1;
    NPTR = 0;
    while((nptr[i] == ' ') || (nptr[i] == '\f') || (nptr[i] == '\n') || (nptr[i] == '\r') || (nptr[i] == '\t') || (nptr[i] == '\v'))
    {
        i++;
    }

    if((nptr[i] == '-') || (nptr[i] == '+'))
    {
        if(nptr[i] == '-')
        {
            sign *= -1;
        }
        i++;
		if(nptr[i] == '-' || nptr[i] == '+')
			return (0);
    }

    while((nptr[i] >= '0') && (nptr[i] <= '9'))
    {
        NPTR = (nptr[i] - 48) + 10 * NPTR;
        i++;
    }
    return(NPTR * sign);
}

// int main(void)
// {
//     char nptr[50] = "   +---+4567890";

//     printf("%d \n", ft_atoi(nptr));
//     return(0);
// }


//  The  atoi() function converts the initial portion of the string pointed
//  to by nptr to int.
//  RETURN VALUE
//  The converted value or 0 on error.