/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:14:50 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/10 11:28:42 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2);
int ft_strlen(const char *character);

char *ft_strjoin(char const *s1, char const *s2)
{
    char * newstring;
    int i;
    int j;

    newstring = malloc(ft_strlen(s1) + ft_strlen(s2));
    i = 0;
    j = 0;

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


    puts(ft_strjoin(test, try));


    return 0;
}