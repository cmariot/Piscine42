#include <unistd.h>

void	ft_print_alphabet(void)
{
	char letters[26];

	letters = "abcdefghijklmnopqrstuvwxyz";
	write(1, &letters, 26);
}
