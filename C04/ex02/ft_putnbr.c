#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	long_nb;
	int			nb2;

	long_nb = 0 + nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	if ((long_nb >= 0) && (long_nb <= 9))
	{
		ft_putchar('0' + long_nb);
	}
	else
	{
		nb2 = long_nb / 10;
		ft_putnbr(nb2);
		ft_putchar((long_nb % 10) + '0');
	}
}