/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:57:55 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:11:20 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strchr(char *str, int c)
{
    size_t i;
    i = 0;

    while (*(str + i) != '\0')
    {
        if (*(str + i) == c)
        {
            return (str + i);
        }
        i++;
    }

return '\0';

}


int main()
{
    char test[] = "This is my test";
    
    // testen
    puts(test);

    //printf("Test 1 : %c \n", *ft_strchr(test, 'm'));

    puts(ft_strchr(test, 'i'));

    return 0;
}