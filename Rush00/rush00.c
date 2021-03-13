#include <unistd.h>

void ft_putchar(char c);
void rush(int col, int raw);

int main(void)
{
	rush(1, 5);
	return(0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int col, int raw) 
{
	int colums;
	colums = col;

	int raws;
	raws = raw;

	int i;
	i = 1;
	
	int j;
	j = 1;

	while ( j <= raws )
	{
	i = 1;
		while ( i <= colums )
		{
			if ( (i == 1) && ( (j == 1) || (j == raws) ) )
			{
				ft_putchar('A');
			}
			else if (( i == raws ) && ( (j == 1) || (j == col) ) )
			{
				ft_putchar('C');
			}
			else 
			{			
				if ((i == 1) || (j == 1) || (i == col) || (j == raws))
				{	
					ft_putchar('B');
				}
				else
				{
					ft_putchar(32);
				}
			}

			i = i + 1;
		}
	
	ft_putchar(10);
	j = j + 1;
	}

}
