/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:29:53 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:05:58 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_memcpy(char *dest, char *src, int n)
{
    int i;
    i = 0;

    while (*(dest + i) != '\0')
    {
        if (i == n)
        {
            break;
        }
        *(dest + i) = *(src + i);
        i++;
    }


}


int     main()
{
    char test[] = "This is my test";
    char try[] = "my test this is";
    
    
    // testen
    puts(test);

    ft_memcpy(test, try, 7);

    puts(test);


    return 0;
}