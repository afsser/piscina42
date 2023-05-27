#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void rush(int x, int y)
{
    int a = 0;
    if (x > 0 && y > 0)
    {
    while (a < y) {
        int l = 0;
        while (l < x) {
            if ((a == 0 && l == 0) || (a == y - 1 && l == x - 1))
                ft_putchar ('/');
            else if ((a == y - 1 && l == 0) || (a == 0 && l == x - 1))
                ft_putchar('\\');
            else if (a == 0 || l == 0 || a == y - 1 || l == x - 1)
                ft_putchar('*');
            else
                ft_putchar(' ');
            l++;
        }
        ft_putchar ('\n');
        a++;
    }
    }
}