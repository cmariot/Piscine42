#include <unistd.h>

void ft_is_negative(int n);

int main() 
{
	ft_is_negative(-3);
	ft_is_negative(0);
	ft_is_negative(3);
	return(0);
}

void ft_is_negative(int n)
{
	char negative[1] = "N";
	char positive[1] = "P";
	
	if (n <= 0) 
	{
		write(1, &negative, 1);
	}
	else
	{
		write(1, &positive, 1);
	}

}
