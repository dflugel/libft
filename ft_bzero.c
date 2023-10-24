/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:27:18 by dflugel           #+#    #+#             */
/*   Updated: 2023/10/24 16:28:33 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

#include <stdio.h>
#include <string.h>

void ft_bzero (char *character, int n)
{
    int i;
    i = 0;

    while (*(character + i) != '\0')
    {
        if (i == n)
        {
            break;
        }
        *(character + i) = '\0';
        i++;
    }


}


int main()
{
    char test[] = "This is my test";
    
    
    // testen
    puts(test);

    ft_bzero(test, 3);

    puts(test);


    return 0;
}