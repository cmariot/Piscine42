  #include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
 {
    int i;
    char c;


	i = 0;
	while (src[i] <= '\0')
            i++;
    while (dest[i] <= '\0')
    {
        c = dest[i];
        src[i] = c;
        i++;
    }
    return src;
 }

 int main(void)
{
	char source[10] = "teto +tTta";
    char destination[20] = "toto +tata";

    printf("perso: %s\n", ft_strcat(destination, source));
    printf("relle: %s\n", strcat(destination, source));
	return (0);
}
