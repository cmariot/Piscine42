#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	i = size - 1;
	while (i >= 0)
	{
		int n;
		n = tab[i] + 48;
		write(1, &n, 1);
		i--;
	}
}
