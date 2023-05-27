#include <unistd.h>
#include <stdio.h>

void rush(int x, int y);
void ft_putchar(char c);

int main() {
    
    int x, y;

    scanf("%d %d", &x, &y );

    rush(x, y);

    return 0;
}