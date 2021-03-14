#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		char c;
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}
