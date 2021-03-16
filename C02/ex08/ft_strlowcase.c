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

char	*ft_str_is_alpha(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
		
			str[i] = str[i] + 32;
		}
		i++;
	}
	return(str);
}

int main(void)
{
	char source[13] = "sufb34ssdSDu";
	ft_str_is_alpha(source);
	ft_putstr(source);
	return (0);
}
