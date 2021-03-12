#include <unistd.h>

void ft_print_alphabet(void);

int main() 
{
	ft_print_alphabet();
	return(0);
}

void ft_print_alphabet(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
        write(1, &letters, 26);
}	
