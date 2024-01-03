/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:29:48 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/02 02:12:06 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     trimlen(char const *srcstr, char const *trimset);
char    *strrev(char const *srcstr);

char    *ft_strtrim(char const *s1, char const *s2)
{
    char *new_str;
    int str_start;
    int str_end;
    int i;

    if(!s1)
    {
        return (0);
    }
    i = 0;
    str_start = trimlen(s1, s2);
    str_end = ft_strlen(s1) - trimlen(strrev(s1), s2);
    new_str = malloc(str_end - str_start);
    while (*(s1 + str_start) != '\0' && str_start <= str_end)
    {
        *(new_str + i) = *(s1 + str_start);
        str_start++;
        i++;
    }

    *(new_str + str_start) = '\0';

    return (new_str);
}

int     ft_strlen(char const *character)
{
    int i;
    i = 0;

    while (*(character + i) != '\0')
    {
        i++;
    }
    
    return(i);

}

char    *strrev(char const *srcstr)
{
    char    *reversed;

    int i;
    int j;
    i = ft_strlen(srcstr);
    j = 0;
    reversed = malloc(i);
    while (i > 0)
    {
        *(reversed + j) = *(srcstr + i - 1);
        j++;
        i--;
    }
    *(reversed + j) = '\0';
    return(reversed);
}


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

int     main()
{
    char const test[] = ",. .This is .,.,";
    char const try[] = ". ,";

    
    // testen
    puts(test);

    printf("Die Länge ist: %i\n",trimlen(test, try));
    printf("Die Länge ist: %i\n",trimlen(strrev(test), try));
    puts(ft_strtrim(test, try));

    return 0;
}