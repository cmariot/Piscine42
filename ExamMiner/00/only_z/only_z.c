#include <unistd.h>

int main(void)
{
    char a;

    a = 'z';
    write(1, &a, 1);
    return (0);
}
