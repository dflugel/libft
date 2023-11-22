/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:37 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:35 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **ft_split(char const *s, char c)
{
    
}

int     count_delimeters(char const *s, char c)
{
    int     i;

    i = 0;
    while (*s != '\0')
    {
        if (*s == c)
        {
            i++;
        }
        
        s++;
    }
    return (i);
}

int     main(void)
{
    char    test[] = "Dies is mein Test.";
    char    try;

    try = ' ';
    printf("Es gibt %i Delimeter\n", count_delimeters(test, try));
    return 0;
}
