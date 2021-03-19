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

//5! = 5*4*3*2*1
int *ft_factorielle(int n)
{
    if ((n == 1) || (n < 0))
    {
        ft_putnbr(n);
        return (0);
    }
    else
    {
        ft_putnbr(n);
		ft_putchar('*');
        ft_factorielle(n - 1);
    }
    return (0);
}

int	main()
{
	int nombre;
	nombre = 1000;
	ft_putnbr(nombre);
    ft_putchar('\n');
    ft_factorielle(nombre);
    ft_putchar('\n');
}
