#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    char even;
    char odd;
    int i;

    even = 'z';
    odd = 'Y';
    i = 0;
    while (i <= 25)
    {
        ft_putchar(even - i);
        ft_putchar(odd - i);
        i += 2;
    }
    ft_putchar('\n');
    return (0);
}

