/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:37:46 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/05 04:45:52 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

int ft_memcmp(char *str1, char *str2, size_t n)
{
    size_t i;
    i = 0;

    while (*(str1 + i) == *(str2 + i))
    {
        if (i == n)
        {
            return 0;
        }
        i++;
    }

    return (*(str1 + i) - *(str2 + i));
    

return i;

}


int main()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "bBCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   printf("%i\n", ret);
   
   return(0);

    return 0;
}