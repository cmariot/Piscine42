#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_map(void)
{
	int i;
	int j;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar('4');
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

void	ft_conv_ac_to_int(char *av[1])
{
	int col1up;
	int col2up;
	int col3up;
	int col4up;
	int col1down;
	int col2down;
	int col3down;
	int col4down;
	int row1left;
	int row2left;
	int row3left;
	int row4left;
	int row1right;
	int row2right;
	int row3right;
	int row4right;
	
	col1up = av[0] - '0' + 0;
	col2up = av[2] - '0' + 0;
	col3up = av[4] - '0' + 0;
	col4up = av[6] - '0' + 0;
	col1down = a[8] - '0' + 0;
	col2down = av[10] - '0' + 0;
	col3down = av[12] - '0';
	col4down = av[14] - '0';
	row1left = av[16] - '0';
	row2left = av[18] - '0';
	row3left = av[20] - '0';
	row4left = av[22] - '0';
	row1right = av[24] - '0';
	row2right = av[26] - '0';
	row3right = av[28] - '0';
	row4right = av[30] - '0';
	
	printf("\n%d\n", row4right);

}

int	main (int ac, char **av)
{
	printf("Nombre d'arguments : %d\n", ac);
	printf("Valeur de l'argument 1 : %s\n", av[1]);

	if (ac == 2)
	{
		ft_conv_ac_to_int(*av[1]);
		ft_map();
	}
	return (0);
}
