/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:56:15 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:27 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void    ft_memset(char *character, int c, int n)
{
    int i;
    i = 0;

    while (*(character + i) != '\0')
    {
        if (i == n)
        {
            break;
        }
        *(character + i) = c;
        i++;
    }


}


int main()
{
    char test[] = "This is my test";
    
    
    // testen
    puts(test);

    ft_memset(test, 't', 3);

    puts(test);


    return 0;
}