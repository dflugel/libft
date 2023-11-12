/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:12:56 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:21:51 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int     ft_tolower(int c)
{
    if (65 <= c && c <= 90)
    {
        c += 32;
    }
    
    
    return(c);

}



int main()
{
 
    // testen
    printf("Test 1 : %c \n", ft_tolower('a'));
    printf("Test 2 : %c \n", ft_tolower('z'));
    printf("Test 1 : %c \n", ft_tolower('A'));
    printf("Test 2 : %c \n", ft_tolower('Z'));

    return 0;
}