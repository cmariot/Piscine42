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

void    ft_print_numbers(void)
{
    char *numbers;

    numbers = "0123456789";
    ft_putstr(numbers);
}

int     main(int argc, char **argv)
{
    argc = 0;
    argv = NULL;
    ft_print_numbers();
}
