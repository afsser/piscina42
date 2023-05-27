#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void rush(int x, int y) {
    char canto_esquerdo = '/';
    char canto_direito = '\\';
    char borda = '*';
    char espaco = ' ';

    int a = 0;
    while (a < y) {
        int l = 0;
        while (l < x) {
            if (a == 0) {
                if (l == 0) {
                    ft_putchar (canto_esquerdo);
                } else if (l == x - 1) {
                    ft_putchar(canto_direito);
                } else {
                    ft_putchar(borda);
                }
            } else if (a == y - 1) {
                if (l == 0) {
                    ft_putchar(canto_direito);
                } else if (l == x - 1) {
                    ft_putchar(canto_esquerdo);
                } else {
                    ft_putchar(borda);
                }    
            } else {
                if (l == 0 || l == x - 1) {
                    ft_putchar(borda);
                } else {
                    ft_putchar(espaco);
                }
            }
            l++;
        }
        write(STDOUT_FILENO, "\n", 1);
        a++;
    }
}