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

char	*ft_strcpy(char *dest, char *src)
{	
	int i;

	i = 0;
	while (src[i] != '\0')
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
	char source[13] = "Hello World !";
	char destination[15];
	ft_putstr(destination);
	ft_strcpy(destination, source);
	ft_putstr(destination);
	return (0);
}
