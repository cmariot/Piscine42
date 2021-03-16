#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int backup[size];
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		backup[i] = tab[i];
		i++;
	}
	i = 0;
	while (tab[i] != '\0')
	{
		tab[i] = backup[size - (i + 1)];
		i++;
	}
}
