#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	char c;
	i = 0;
	while ((src[i] != '\0') && (i <= size - 1))
	{
		c = src[i];
		dest[i] = c;
		i++;
	}
	dest[i] = '\0';

	if (size == 0)
		return (i);

	else
		return size +i ;
}

int main(void)
{
	char source[10] = "toto +tata";
    char destination[10] = "too +tata";
    unsigned int taille_destination = 5;
	char source2[10] = "toto +tata";
    char destination2[9] = "too +tata";
    unsigned int taille_destination2 = 5;

	// ft_strlcpy(destination, source, taille_destination);
	// ft_putstr(destination);
	// ft_putstr("\n\n");
    printf("perso: %d\n", ft_strlcpy(destination, source, taille_destination));
    printf("relle:%zu\n", strlcpy(destination2, source2, taille_destination2));
	return (0);
}
