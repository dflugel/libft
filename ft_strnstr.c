/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:55:57 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/05 19:19:08 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

char *ft_strnstr(char *haystack, char *needle, size_t len)
{
    size_t i;
    i = 0;
    size_t j;
    j = 0;

    while (*(haystack + i) != '\0')
    {
        if (i == len)
        {
            return 0;
        }
        while (*(haystack + i + j) == *(needle + j))
        {
            j++;
            if (*(needle + j) == '\0')
            {
                return (haystack + i);
            }
        }
        j = 0;
        i++;
    }
return 0;

}


int main()
{
    char test[] = "This is my test";
    char try[] = "is";
    
    // testen
    puts(test);

    puts(ft_strnstr(test, try, 20));

    return 0;
}