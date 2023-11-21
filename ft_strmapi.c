#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  len;
    size_t  i;
    char    *result;
    
    if (s == NULL || f == NULL)
    {
        return (NULL);
    }
    len = ft_strlen(s);
    i = 0;
    result = malloc(len + 1);
    if (result == NULL)
    {
        return (NULL);
    }
    while (i < len)
    {
        *(result + i) = f((unsigned int) i, *(s + i));
        i++;
    }
    *(result + len) = '\0';
    return (result);
}

