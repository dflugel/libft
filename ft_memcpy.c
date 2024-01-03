/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielflugel <danielflugel@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:29:53 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/03 13:18:26 by danielfluge      ###   ########.fr       */
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
    char try[] = "Dings";
    
    
    // testen
    puts(test);

    ft_memcpy(test, try, ft_strlen(try));

    puts(test);


    return 0;
}