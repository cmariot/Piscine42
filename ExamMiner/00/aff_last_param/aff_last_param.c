#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str)
        ft_putchar(*str++);
}

int     main(int argc, char **argv)
{
    if (argc == 1)
        ft_putchar('\n');
    else
    {
        ft_putstr(argv[argc - 1]);
        ft_putchar('\n');
    }
    return (0);
}
