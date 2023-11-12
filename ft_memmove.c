/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:51:30 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:10:38 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_memmove(char *dest1, char *src1, int n)
{
    int i;
    i = 0;
    char proxy[n];
    while (*(src1 + i) != '\0')
    {
        if (i == n)
        {
            break;
        }
        *(proxy + i) = *(src1 + i);
        i++;
    }

    i = 0;
    while (*(dest1 + i) != '\0')
    {
        if (i == n)
        {
            break;
        }
        *(dest1 + i) = *(proxy + i);
        i++;
    }
}


int main()
{
    char test[] = "This is my test";
    
    
    // testen
    puts(test);

    ft_memmove(test, test + 2, 7);

    puts(test);


    return 0;
}