#include <stdlib.h>
#include <stdio.h>
#define LEN	200000000

int	main()
{
	int	i;
	int	*tab;

	tab = (int *)malloc(sizeof(int) * LEN);
	i = 0;
	while (i <= LEN)
	{
		tab[i] = i;
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
