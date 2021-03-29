#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{
    int i;

    if (argc != 2)
    {
        ft_putchar('z');
        ft_putchar('\n');
    }
    else
    {
        i = 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == 'z')
            {
                ft_putchar('z');
                ft_putchar('\n');
                return (0);
            }
            i++;
        }
        ft_putchar('z');
        ft_putchar('\n');
    }

    return (0);
}
