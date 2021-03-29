#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*str++);
}

int main()
{
    char *hello;

    hello = "Hello World!";
    ft_putstr(hello);
    ft_putchar('\n');
    return (0);
}
