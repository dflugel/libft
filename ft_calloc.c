/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 02:10:04 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/22 13:11:06 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void    *ft_calloc(size_t nitems, size_t size)
{
    int i;
    int n;
    i = 0;
    n = nitems * size;
    char *place;

    place = malloc(n);


    while (i < (n))
    {
        *(place + i) = '\0';
        i++;
    }

    return (place);
}


int main() {
    // Test 1: Allocate and initialize an array of integers
    size_t num_integers = 5;
    size_t int_size = sizeof(int);

    int *int_array = (int *)ft_calloc(num_integers, int_size);
    
    if (int_array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    // Check if the memory is properly initialized to zero
    for (size_t i = 0; i < num_integers; i++) {
        if (int_array[i] != 0) {
            printf("Memory not properly initialized at index %zu.\n", i);
            return 1;
        }
    }
    
    // Test 2: Allocate and initialize an array of characters
    size_t num_chars = 10;
    size_t char_size = sizeof(char);

    char *char_array = (char *)ft_calloc(num_chars, char_size);

    if (char_array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    // Check if the memory is properly initialized to zero
    for (size_t i = 0; i < num_chars; i++) {
        if (char_array[i] != 0) {
            printf("Memory not properly initialized at index %zu.\n", i);
            return 1;
        }
    }
    
    // Test 3: Free the allocated memory
    free(int_array);
    free(char_array);

    printf("Memory allocation and initialization tests passed.\n");

    return 0;
}
