#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;
	int c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if ((nb >= 0) && (nb <= 9))
	{
		a = 48 + nb;
		ft_putchar(a);
	}
	else
	{
		b = nb / 10;
		ft_putnbr(b);
		c = (nb % 10) + 48;
		ft_putchar(c);
	}
}

void	ft_ultimate_ft(int *nbr)
{
	int b;

	b = 42;
	nbr = &b;
}

int main()
{
	int a;
	int b;
	int *ptr1;
/*	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;	
*/	
	a = 3;
	ptr1 = &a;
/*	ptr2 = &*ptr1;
	ptr3 = &**ptr2;
	ptr4 = &***ptr3;
	ptr5 = &****ptr4;
	******ptr6 = &*****ptr5;
	*******ptr7 = &******ptr6;
	********ptr8 = &******ptr7;
*/
	ft_putnbr(a);	
	ft_ultimate_ft(*ptr1);
	ft_putnbr(a);	
	
	ft_putchar(10);
	return (0);
}
