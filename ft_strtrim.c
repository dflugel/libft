/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:29:48 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/15 21:22:50 by dflugel          ###   ########.fr       */
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

    if(!s1)
    {
        return (0);
    }
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

    return (newstring);
}

int     ft_strlen(const char *character)
{
    int i;
    i = 0;

    while (*(character + i) != '\0')
    {
        i++;
    }
    
    return(i);

}

// char    *strrev(char const *srcstr)
// {
//     char *str;
//     char *reversed;
//     str = malloc(9);
//     reversed = malloc(9);

//     int i;
//     int j;
//     i = 0;
//     j = 0;

//     while (n != 0)
//     {
//         *(reversed + i) = n % 10 + 48;
//         n = n/10;
//         i++;
//     }

//     while (i > 0)
//     {
//         *(str + j) = *(reversed + i - 1);
//         j++;
//         i--;
//     }

//     *(str + j) = '\0';

//     return(str);
// }


int     trimlen(char const *srcstr, char const *trimset)
{
    char *newstring;
    int i;
    int j;
    int stoptrigger;

    i = 0;
    stoptrigger = 1;
    while (*(srcstr + i) != '\0' && stoptrigger == 1)
    {
        stoptrigger = 0;
        j = 0;
        while (*(trimset + j) != '\0')
        {
            if (*(trimset + j) == *(srcstr + i))
            {
                stoptrigger = 1;
                break;
            }
            j++;
        }
        i++;
    }
    i--;
    return (i);
}

int main()
{
    char const test[] = ", .This is .,";
    char const try[] = ". ,";

    
    // testen
    puts(test);


    printf("Die Länge ist: %i\n",/*ft_str*/trimlen(test, try));


    return 0;
}