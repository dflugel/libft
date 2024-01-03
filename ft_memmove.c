/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielflugel <danielflugel@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:51:30 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/03 13:40:47 by danielfluge      ###   ########.fr       */
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
    if (*(src1 + n - 1) == '\0')
    {
        *(dest1 + i - 1) = '\0';
    }
}


/* int main()
{
    char test[] = "This is my test";
    char try[] = "So isses.";
    
    // testen
    puts(test);

    ft_memmove(test, try, 9);

    puts(test);


    return 0;
} */