/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflugel <dflugel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 05:40:37 by dflugel           #+#    #+#             */
/*   Updated: 2023/11/09 05:52:17 by dflugel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *str);

char *ft_strdup(const char *str)
{
    char * duplicate;
    int i;
    i = 0;

    while (*(str + i) != '\0')
    {
        i++;
    }

    duplicate = malloc(i);
    i = 0;
    
    while (*(str + i) != '\0')
    {
        *(duplicate + i) = *(str + i);
        i++;
    }

    *(duplicate + i) = '\0';

    return duplicate;
}


int main() {
    const char *original = "Hello, World!";
    
    // Test 1: Duplicate the string
    char *duplicate = ft_strdup(original);
    
    if (duplicate == NULL) {
        printf("Memory allocation for duplication failed.\n");
        return 1;
    }

    // Test 2: Check if the duplicated string matches the original
    if (strcmp(original, duplicate) == 0) {
        printf("Test 2 Passed: Duplicated string matches the original.\n");
    } else {
        printf("Test 2 Failed: Duplicated string does not match the original.\n");
    }
    
    // Test 3: Modify the duplicated string and check if it's independent
    duplicate[0] = 'G'; // Change the first character in the duplicated string
    
    if (strcmp(original, duplicate) != 0) {
        printf("Test 3 Passed: Modified duplicated string is independent.\n");
    } else {
        printf("Test 3 Failed: Modified duplicated string still matches the original.\n");
    }
    
    // Test 4: Free the duplicated string
    free(duplicate);

    return 0;
}
