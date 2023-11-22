/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:53:16 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:12:17 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_toupper(int c)
{
    if (97 <= c && c <= 122)
    {
        c -= 32;
    }
    
    
    return(c);

}



int main()
{
 
    // testen
    printf("Test 1 : %c \n", ft_toupper('a'));
    printf("Test 2 : %c \n", ft_toupper('z'));
    printf("Test 1 : %c \n", ft_toupper('A'));
    printf("Test 2 : %c \n", ft_toupper('Z'));


    return 0;
}