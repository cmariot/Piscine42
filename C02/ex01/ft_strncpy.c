#include <unistd.h>

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{	
	int i;

	i = 0;
	while ((src[i] != '\0') && (i < n ))
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	unsigned int stop;
	stop = 5;
	char source[13] = "Hello World !";
	char destination[15];
	ft_putstr(destination);
	ft_strncpy(destination, source, stop);
	ft_putstr(destination);
	return (0);
}

