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

int ft_is_alphanumeric(char letter)
{
    if ((letter >= '0') && (letter <= '9'))
    {
        return (1);
    }
    else if ((letter >= 'a') && (letter <= 'z'))
    {
        return (1);
    }
    else if ((letter >= 'A') && (letter <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

char	*ft_strcapitalize(char *str)
{
	int i;
    char c;

	i = 0;
	while (str[i])
	{
        if (ft_is_alphanumeric(str[i - 1]) == 0)
        {
            if (ft_is_alphanumeric(str[i]) == 1)
            {
                if (str[i] > 90)
                {
                    c = str[i] - 32;
                    str[i] = c;
                }
            }
        }
        i++;
	}
	return(str);
}

int main(void)
{
	char source[15] = "toto +tata Titi";
	ft_strcapitalize(source);
	ft_putstr(source);
	return (0);
}
