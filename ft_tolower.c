/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:12:56 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/05 02:14:19 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

int ft_toupper(int c)
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
    printf("Test 1 : %c \n", ft_toupper('a'));
    printf("Test 2 : %c \n", ft_toupper('z'));
    printf("Test 1 : %c \n", ft_toupper('A'));
    printf("Test 2 : %c \n", ft_toupper('Z'));

    return 0;
}