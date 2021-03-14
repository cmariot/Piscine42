#include <unistd.h>

void	ft_print_numbers(void)
{
	char number;
	number = '0';
	while (number <= '9')
	{
		write(1, &number, 10);
		number++;
	}
}

int	main()
{
	ft_print_numbers();
	return(0);
}

