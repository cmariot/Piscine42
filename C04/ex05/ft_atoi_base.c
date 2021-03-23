
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == 32)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int ft_count_minus(char c)
{
	if (c == '-' || c == '+')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(char *str)
{
	int i;
	int minus_counter;
	int nb;

	i = 0;
	while (ft_isspace(str[i]) == 1)
			i++;
	minus_counter = 0;
	while (ft_count_minus(str[i]) == 1)
	{
		if(str[i] == '-')
				minus_counter++;
		i++;
	}
	if (minus_counter % 2 != 0)
			minus_counter = -1;
	else
			minus_counter = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * minus_counter);
}

void	ft_atoi_base(char *str, char *base)                                     
{
	int			diviseur;
	int			result;
	int			base_len;
	long int	long_nb;

	long_nb = ft_atoi(str) + 0;
	base_len = 0;
	while (base[base_len] != '\0')
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return;
		base_len++;
	}
	if (base_len <= 1)
			return;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -(long_nb);
	}
	diviseur = 1;
	while ((long_nb / diviseur) >= base_len)
		diviseur = diviseur * base_len;
	while (diviseur > 0)
	{
		result = (long_nb / diviseur) % base_len;
		ft_putchar(base[result]);
		diviseur = diviseur / base_len;
	}
}

int	main(void)
{
	char *str;
	str = "34644ab56";
	char *base;
	base = "0123456789ABCDEF";
	ft_atoi_base(str, base);
	return (0);
}	