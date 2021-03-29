#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
// #define TRUE 1
// #define FALSE 0
#define EVEN ft_is_odd

void ft_putstr(char *str);

typedef struct st_bool t_bool;
struct st_bool
{
    struct st_bool TRUE;

    struct st_bool FALSE;

};


struct st_bool ft_is_odd(int nb)
{
    if (nb % 2 == 0)
        return (TRUE);
    else
        return (FALSE);
}

