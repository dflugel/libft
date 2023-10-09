#include <unistd.h>

#include <stdio.h>
#include <string.h>

int ft_strlen(char character[])
{
    int i;
    
    return(character);

}



int main()
{
    // yes testen
    printf("Length of string b = %zu \n",ft_strlen("yes"));

    // done testen
    printf("Length of string b = %zu \n",ft_strlen("Done"));

    // Hallo testen
    printf("Length of string b = %zu \n",ft_strlen("Hallo"));

    return 0;
}