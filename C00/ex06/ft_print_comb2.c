#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

int main(void)
{
	ft_print_comb2();
	return(0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i='0';
	j='0';
	k='0';
	l='1';

	while( i<= '9')
	{
		j = '0';
		while( j <= '9')
		{
			k = '0';
			while( k <= '9')
			{
				if(k == '0')
				{
					l = j + 1;
					k = i;
				}
				else
				{
					l = '0';
				}
				while( l <= '9' )
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(32);
					ft_putchar(k);
					ft_putchar(l);
				
					if ( (i == '9') && (j == '8') && (k == '9') && (l == '9')) {
						ft_putchar(46);
					}
					else
					{
						ft_putchar(44);
						ft_putchar(32);
					}
					l = l + 1;
				}
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	ft_putchar(10);
}



