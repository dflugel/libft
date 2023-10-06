#include <unistd.h>

int ft_isalnum(int character)
{
    if (character > 64 && character < 91)
    {
        return (1);
    }
    else if (character > 96 && character < 123)
    {
        return (1);
    }
    else if (character > 47 && character < 58)
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
    if  (ft_isalnum(50))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // Z testen
    if  (ft_isalnum('Z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // " " testen
    if  (ft_isalnum(' '))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // 1 testen
    if  (ft_isalnum('1'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    return 0;
}