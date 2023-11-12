/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:53:55 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:07:15 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isprint(int character)
{
    if (character >= 32 && character <= 126)
    {
        return (1);
    }
    else
    {
        return (0);
    }

}



int main()
{
    // 5 testen
    if  (ft_isprint('5'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // A testen
    if  (ft_isprint('A'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // DEL testen
    if  (ft_isprint(10))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // z testen
    if  (ft_isprint('z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // 1 testen
    if  (ft_isprint('1'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    return 0;
}