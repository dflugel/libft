/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:13:41 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:12:10 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_strrchr(char *str, int c)
{
    size_t i;
    i = 1;

    while (*(str + i - 1) != '\0')
    {
        i++;
    }

    while (i != 0)
    {
        if (*(str + i - 1) == c)
        {
            return (str + i - 1);
        }
        i--;
    }

return (0);

}


int main()
{
    char test[] = "This is my test";
    
    // testen
    puts(test);

    //printf("Test 1 : %c \n", *ft_strchr(test, 'm'));

    puts(ft_strrchr(test, 'm'));

    return 0;
}