/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 02:15:47 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/05 01:54:48 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, char *src, size_t n)
{
    size_t i;
    i = 0;

    while (*(dest + i) != '\0')
    {
        if (i == n)
        {
            *(dest + i) = '\0';
            break;
        }
        *(dest + i) = *(src + i);
        i++;
    }

return i;

}


int main()
{
    char test[] = "This is my test";
    char try[] = "my test this is";
    char f;
    
    // testen
    puts(test);

    f = ft_strlcpy(test, try, 7) + 48;
    
    write(1, &f,1);
    write(1, "\n",1);

    puts(test);


    return 0;
}