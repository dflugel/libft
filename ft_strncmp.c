/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:34:01 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/05 04:42:29 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

size_t ft_strncmp(char *str1, char *str2, size_t n)
{
    size_t i;
    i = 0;

    while (*(str1 + i) == *(str2 + i))
    {
        if (*(str1 + i) != '\0' || *(str2 + i) != '\0' || i == n)
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

   strcpy(str1, "Abddef");
   strcpy(str2, "abaef");

   ret = ft_strncmp(str1, str2, 2);

   printf("%i\n", ret);
   
   return(0);

    return 0;
}