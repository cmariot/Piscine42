#include <unistd.h>

void ft_print_numbers(void);

int main()
{
	ft_print_numbers();
	return(0);
}

void ft_print_numbers(void)
{
	char numbers[10] = "0123456789";
	write(1, &numbers, 10);
}
