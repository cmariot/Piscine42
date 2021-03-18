 int	ft_str_is_printable(char *str)
{
	int i;
	int resultat;

	i = 0;
	resultat = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= '~'))
		{
		}
		else
		{
			resultat++;
		}
		i++;
	}
	if ((resultat == 0) || (i == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

 void ft_putstr_non_printable(char *str)
 {
     int i;

     i = 0;
     while (str[i] != '\0')
     {
         if (str[i] == 92)
         {
             str[i + 1] = '0';
         }
         i++;
     }
 }

int main()
{
    char string[21] = "Coucou\ntu vas bien ?";
}
