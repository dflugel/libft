/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:47:14 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:29:21 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *character)
{
    int i;
    i = 0;

    while (*(character + i) != '\0')
    {
        i++;
    }
    
    return(i);

}


/*
int main()
{
    char *d = "done";
    char *h = "Hallo";
    
    
    // yes testen
    printf("Length of string b = %d \n",ft_strlen("y"));

    // done testen
    printf("Length of string b = %d \n",ft_strlen(d));

    // Hallo testen
    printf("Length of string b = %d \n",ft_strlen(h));

    return 0;
}
*/