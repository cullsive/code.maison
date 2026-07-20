#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10)
        ft_putnbr(nb / 10);

    char c = '0' + (nb % 10);
    write(1, &c, 1);
}

int main (void){

ft_putnbr(42);
    write(1, "\n", 1);

    ft_putnbr(-1234);
    write(1, "\n", 1);

    ft_putnbr(0);
    write(1, "\n", 1);

    ft_putnbr(2147483647);
    write(1, "\n", 1);

    ft_putnbr(-2147483648);
    write(1, "\n", 1);

return 0; 
}
