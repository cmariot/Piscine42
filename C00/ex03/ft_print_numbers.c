#include <unistd.h>

void	ft_print_numbers(void)
{
	char numbers[10];

	numbers = "0123456789";
	write(1, &numbers, 10);
}
