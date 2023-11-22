/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:09:24 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:34 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
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
}
