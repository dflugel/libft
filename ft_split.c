/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:37 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/02 03:34:57 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    **ft_split(char const *s, char c)
{
    int     n_str;
    int     i;
    char    *result;

    if (s == NULL)
    {
        return (NULL);
    }
    result = malloc(ft_strlen(s) + 1);
    if (result == NULL)
    {
        return (NULL);
    }
    
    while (i < n_str)
    {
        /* code */
    }
    
}

int     count_strings(char const *s, char c)
{
    int     i;

    i = 1;
    while (*s != '\0')
    {
        if (*s == c)
        {
            i++;
        }
        s++;
    }
    return (i);
}

int     count_double_delimeters(char const *s, char c)
{
    int     i;

    i = 0;
    while (*s != '\0')
    {
        if (*s == c && *(s+1) == c)
        {
            i++;
        }
        s++;
    }
    return (i);
}

int     main(void)
{
    char    test[] = "Dies is mein  Test.";
    char    try;

    try = ' ';
    printf("Es gibt %i Delimeter.\n", count_strings(test, try));
    printf("Davon kommen %i doppelt vor.\n", count_double_delimeters(test, try));
    return 0;
}
