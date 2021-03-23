#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sqrt;
	sqrt = 0;
	if (nb > 0)
	{
		while ((sqrt * sqrt != nb) && (sqrt < nb))
		sqrt++;
	}
	if (sqrt == nb)
		return (0);
	else
		return (sqrt);
}

int ft_is_prime(int nb)
{
	int sqrt;
	int prime;
	sqrt = ft_sqrt(nb);
	prime = 2;
	while (nb % prime != 0)
		prime++;
	if (prime == nb)
		return (1);
	else
		return (0);
}

int ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb) == 1) ? (nb) : (ft_find_next_prime(nb + 1));
}

int	main()
{
	int nb;
	nb = 24;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
