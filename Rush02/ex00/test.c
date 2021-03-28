int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_strlen("1000000000000000000000000000000000000"));
}
