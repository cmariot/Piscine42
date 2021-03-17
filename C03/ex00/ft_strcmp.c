 #include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
 {
    int difference;
    int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
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
	char phrase1[10] = "toti +taga";
    char phrase2[10] = "toto +tata";

    printf("perso: %d\n", ft_strcmp(phrase1, phrase2));
    printf("relle: %d\n", strcmp(phrase1, phrase2));
	return (0);
}


