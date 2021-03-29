#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    char digit;

    argv = NULL;
    argc = 0;

    digit = '9';
    while (digit >= '0')
    {
        ft_putchar(digit--);
    }
    ft_putchar('\n');
    return (0);
}
