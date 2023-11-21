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

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     intlen(int n);

char    *ft_itoa(int n)
{
    char *str;
    int i;

    if(!n)
    {
        return (NULL);
    }
    i = intlen(n);
    str = malloc(i);
    *(str + i) = '\0';
    i--;
    while (i >= 0)
    {
        *(str + i) = n % 10 + 48;
        n = n/10;
        i--;
    }
    return(str);

}

int     intlen(int n)
{
    int     i;

    i = 0;
    while (n != 0)
    {
        n = n/10;
        i++;
    }
    return i;
}

int main () 
{

   puts(ft_itoa(98990489));

   return(0);
}
