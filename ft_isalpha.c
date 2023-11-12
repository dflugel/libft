/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:49:54 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/12 13:06:53 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalpha(int character)
{
    if (character > 64 && character < 91)
    {
        return (1);
    }
    else if (character > 96 && character < 123)
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
    // a testen
    if  (ft_isalpha('a'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // A testen
    if  (ft_isalpha('A'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // Z testen
    if  (ft_isalpha('Z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // z testen
    if  (ft_isalpha('z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // 1 testen
    if  (ft_isalpha(1))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    return 0;
}