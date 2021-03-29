#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main()
{
    char even;
    char odd;
    int i;

    even = 'a';
    odd = 'B';
    i = 0;
    while(i < 26)
    {
        ft_putchar(even + i);
        ft_putchar(odd + i);
        i += 2;
    }
    ft_putchar('\n');
    return (0);
}
