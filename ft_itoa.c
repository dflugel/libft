/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 06:11:34 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:07:43 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_itoa(int n)
{
    // calloc reversed
    // malloc str definieren
    
    char *str;
    char *reversed;
    str = malloc(9);
    reversed = malloc(9);

    int i;
    int j;
    i = 0;
    j = 0;

    while (n != 0)
    {
        *(reversed + i) = n % 10 + 48;
        n = n/10;
        i++;
    }

    while (i > 0)
    {
        *(str + j) = *(reversed + i - 1);
        j++;
        i--;
    }

    *(str + j) = '\0';

    return(str);

}


int main () 
{

   puts(ft_itoa(98990489));

   return(0);
}
