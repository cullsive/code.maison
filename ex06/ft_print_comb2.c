
#include <unistd.h>


void ft_print_comb2(void)
{
    int i = 0;
    int j;

    while (i <= 98)
    {
        j = i + 1;
        while (j <= 99)
        {
            char a = '0' + (i / 10);
            char b = '0' + (i % 10);

            char c = '0' + (j / 10);
            char d = '0' + (j % 10);

            
            write(1, &a, 1);
            write(1, &b, 1);

            
            write(1, " ", 1);

            
            write(1, &c, 1);
            write(1, &d, 1);

            
            if (!(i == 98 && j == 99))
                write(1, ", ", 2);

            j++;
        }
        i++;
    }
}

