/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielflugel <danielflugel@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:37 by dflugel           #+#    #+#             */
/*   Updated: 2024/01/03 15:27:22 by danielfluge      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     count_strings(char const *s, char c);
char    *str_alloc(char const *src_str, char del, int nr_str);
int     cut_front(char const *src_str, char del, int nr_str);

char    **ft_split(char const *s, char c)
{
    int     n_str;
    int     i;
    char    **result;

    if (s == NULL)
    {
        return (NULL);
    }
    n_str = count_strings(s, c);
    result = malloc(n_str + 1);
    if (result == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < n_str)
    {
        *(result + i) = str_alloc(s, c, i);
        i++;
    }
    *(result + i) = NULL;
    return (result);
}

int     count_strings(char const *s, char c)
{
    int     i;

    i = 1;
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

char    *str_alloc(char const *src_str, char del, int nr_str)
{
    int     i;
    char    *buffer;
    char    *result;

    buffer = malloc(ft_strlen(src_str));
    src_str += cut_front(src_str, del, nr_str);
    i = 0;
    while (*(src_str +i) != del && *(src_str + i) != '\0')
    {
        *(buffer + i) = *(src_str + i);
        i++;
    }
    result = malloc(ft_strlen(buffer) + 1);
    i = 0;
    while (i < ft_strlen(buffer))
    {
        *(result + i) = *(buffer + i);
        i++;
    }
    *(result + i) = '\0';
    free (buffer);
    return (result);
}

int     cut_front(char const *src_str, char del, int nr_str)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (i < nr_str)
    {
        if (*(src_str + j) == del)
        {
            i++;
        }
        j++;
    }
    return (j);
}

void free_split_result(char **result) {
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);
}

int main() {
    const char *input_string = ",,,,,This,is,a,split,,;,example,,,,";
    char delimiter = ',';

    // Example usage of ft_split
    char **result = ft_split(input_string, delimiter);

    // Print the resulting strings
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }

    // Free the allocated memory
    free_split_result(result);

    return 0;
}