/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:18:32 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/05 04:24:56 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>
#include <string.h>

char *ft_memchr(char *str, int c, size_t n)
{
    size_t i;
    i = 0;

    while (*(str + i) != '\0' && i <= n)
    {
        if (*(str + i) == c)
        {
            return (str + i);
        }
        i++;
    }

return '\0';

}


int main()
{
    char test[] = "This is my test";
    
    // testen
    puts(test);

    puts(ft_memchr(test, 'm', 7));

    return 0;
}