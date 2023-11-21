#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    ft_putstr_fd(ft_itoa(n), fd);
}

int main() {
    int    test = 98432;
    
    ft_putnbr_fd(test, 1);

    return 0;
}