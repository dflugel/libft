/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielflugel <danielflugel@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 04:18:32 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/03 11:46:23 by danielfluge      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char    *ft_memchr(char *str, int c, size_t n)
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

return (NULL);

}


int main()
{
    char test[] = "This is my test";
    
    // testen
    puts(test);

    puts(ft_memchr(test, 'm', 7));

    return 0;
}