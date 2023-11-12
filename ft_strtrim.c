/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:29:48 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:16:57 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *s2)
{
    // i für start (testen, wie viele characters passen)
    // j für Ende (testen, ab wann die characters passen)
    // j - i allokieren
    // j bis i einsetzen

    char * newstring;
    int i;
    int j;

    i = 0;
    j = 0;


    newstring = malloc(ft_strlen(s1) + ft_strlen(s2));

    while (*(s1 + i) != '\0')
    {
        *(newstring + i) = *(s1 + i);
        i++;
    }

    while (*(s2 + j) != '\0')
    {
        *(newstring + i + j) = *(s2 + j);
        j++;
    }

    *(newstring + i + j) = '\0';

    return newstring;
    //return null if alloc fails not implemented yet
}

int ft_strlen(const char *character)
{
    int i;
    i = 0;

    while (*(character + i) != '\0')
    {
        i++;
    }
    
    return(i);

}

int main()
{
    char test[] = "This is ";
    char try[] = "my test";

    
    // testen
    puts(test);


    puts(ft_strtrim(test, try));


    return 0;
}