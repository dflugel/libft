/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:53:28 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:07:17 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isascii(int character)
{
    if (character >= 0 && character <= 127)
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
    if  (ft_isascii('5'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // A testen
    if  (ft_isascii('A'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // DEL testen
    if  (ft_isascii(128))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // z testen
    if  (ft_isascii('z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // 1 testen
    if  (ft_isascii('1'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    return 0;
}