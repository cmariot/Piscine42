#include <unistd.h>

// It's equivalent to (int)strtol(str, (char **)NULL, 10);
int	ft_atoi(char *str)
{

}

void ft_putchar(char ptr)
{
    write(1, &ptr, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        index++;
    }
}


