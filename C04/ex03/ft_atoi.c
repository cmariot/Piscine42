#include <unistd.h>

// It's equivalent to (int)strtol(str, (char **)NULL, 10);
int	ft_atoi(char *str)
{
	int i;

	i = 0;
	while (str[i] == 32)
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+')

}

int	main(void)
{
	char *str;
	str = "   ---+--+1234ab56";
	ft_atoi(str);
	return (0);
}	
