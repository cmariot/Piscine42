#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		*range = (*void);
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min + i;
		printf("%d\n", tab[i]);
		i++;
	}
	return (i);
}

int		main(void)
{
	int min;
	int max;
	int **range;

	if (!(range = malloc(sizeof(int) * (max - min))))
		return (-1);
	*range = (*void);
	min = 3;
	max = 6;
	range = 3;
	ft_ultimate_range(range, min, max);
	return (0);
}
