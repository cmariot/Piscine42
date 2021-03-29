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

int     main(int argc, char **argv)
{
    int i;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar('a');
                ft_putchar('\n');
                return (0);
            }
            i++;
        }
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('a');
        ft_putchar('\n');
    }
    return (0);
}
