/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:10:13 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:30 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    size_t  len;
    size_t  i;

    len = ft_strlen(s);
    i = 0;
    while(i < len)
    {
        write(fd, (s + i), 1);
        i++;
    }
    write(fd, "\n", 1);
}
