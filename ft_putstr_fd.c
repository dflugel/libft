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
