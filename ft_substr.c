/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:54:10 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:17:31 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char * substring;
    size_t i;
    i = 0;

    substring = malloc(len);

    while (*(s + start + i) != '\0')
    {
        if (i == len)
        {
            break;
        }
        *(substring + i) = *(s + start + i);
        i++;
    }

    *(substring + i) = '\0';

    return substring;
    //return null if alloc fails not implemented yet
}

int main()
{
    char test[] = "This is my test";

    
    // testen
    puts(test);


    puts(ft_substr(test, 3, 7));


    return 0;
}