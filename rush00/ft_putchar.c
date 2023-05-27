#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}
