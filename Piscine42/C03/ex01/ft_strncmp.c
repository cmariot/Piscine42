 #include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
 {
    int difference;
    int i;

	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i <= n))
	{
		if (s1[i] != s2[i])
        {
            if (s1[i] > s2[i])
            {
                difference = (s1[i] - s2[i]);
                return difference ;
            }
            else if (s1[i] < s2[i])
            {
                difference = (s1[i] - s2[i]);
                return difference;
            }
        }
		i++;
	}
    return 0;
 }

int main(void)
{
	char phrase1[10] = "teto +tTta";
    char phrase2[10] = "toto +tata";
    unsigned int dist = 5;

    printf("perso: %d\n", ft_strncmp(phrase1, phrase2, dist));
    printf("relle: %d\n", strncmp(phrase1, phrase2, dist));
	return (0);
}


