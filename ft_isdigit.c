#include <unistd.h>

int ft_isdigit(int character)
{
    if (character > 47 && character < 58)
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
    if  (ft_isdigit('5'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // A testen
    if  (ft_isdigit('A'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // Z testen
    if  (ft_isdigit('Z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // z testen
    if  (ft_isdigit('z'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    // 1 testen
    if  (ft_isdigit('1'))
    {
        write(1, "true", 4);
    }
    else
    {
        write(1, "false", 5);
    }

    return 0;
}