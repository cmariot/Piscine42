#include <unistd.h>

int main(void)
{
    char z;

    z = 'a';
    write(1, &z, 1);
    return (0);
}
