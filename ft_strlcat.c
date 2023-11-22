/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:21:50 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:48 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t  ft_strlcat(char *dest, char *src, size_t n)
{
    size_t i;
    size_t j;
    i = 0;
    j = 0;

    while (*(dest + i) != '\0')
    {
        i++;
    }

    *(dest + i) = *(src + j);

    while (*(dest + i) != '\0')
    {
        if (i == n)
        {
            *(dest + i) = '\0';
            break;
        }
        *(dest + i) = *(src + j);
        i++;
        j++;
    }

return (i);

}



int main()
{
    char test[] = "This is my test";
    char try[] = "my test this is";
    char f;
    
    // testen
    puts(test);

    f = ft_strlcat(test, try, 27);
    
    printf("%i\n", f);

    puts(test);


    return 0;
}