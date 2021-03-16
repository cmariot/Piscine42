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

int	ft_str_is_alpha(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
		}
		else
		{
			resultat++;
		}
		i++;
	}
	char affichage_resultat;
	affichage_resultat = resultat + '0';
	write(1, &affichage_resultat, 1);
	if (resultat > 0)
	{
		return(0);
	}
	else if (i == 0)
	{
		return (1);
	}
	else
	{
		return(1);
	}
}

int main(void)
{
	char source[13] = "sufb34ssdSDu";
	ft_str_is_alpha(source);
	return (0);
}

