/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:55:51 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:04 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_atoi(char *str)
{
    int nbr;
    nbr = 0;

    int i;
    i = 0;

    while (*(str + i) != '\0')
    {
        if (*(str + i) < 48 || *(str + i) > 57 )
        {
            return 0;
        }
        
        nbr = nbr * 10 + (*(str + i) - 48);
        i++;
    }
    
    return(nbr);

}


int main () {
   int val;
   char str[20];
   
   strcpy(str, "98990489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}