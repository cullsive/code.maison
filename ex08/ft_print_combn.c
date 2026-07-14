#include <unistd.h>

void cull(int tab[], int n)
{
    int i;
    char c;

    i = 0;
    while (i < n)
    {
        c = tab[i] + '0';
        write(1, &c, 1);
        i++;
    }
    if (tab[0] != 10 - n)
        write(1, ", ", 2);
}

void generateur_cullsive(int tab[], int index, int n)
{
    int start;
    int digit;

    if (index == n)
    {
        cull(tab, n);
        return;
    }
    start = (index == 0) ? 0 : tab[index - 1] + 1;
    digit = start;
    while (digit <= 9)
    {
        tab[index] = digit;
        generateur_cullsive(tab, index + 1, n);
        digit++;
    }
}

void ft_print_combn(int n)
{
    int tab[10];

    generateur_cullsive(tab, 0, n);
}
