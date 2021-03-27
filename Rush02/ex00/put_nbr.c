/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngomis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:02:19 by ngomis            #+#    #+#             */
/*   Updated: 2021/03/27 17:43:26 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	put_str_10(int nb, char *nbr)
{
	if (ft_strlen(nbr) == 1)
	{
		if (nb == 1)
		   ft_putstr("one");
		if (nb == 2)
		   ft_putstr("two");
		if (nb == 3)
		   ft_putstr("three");
		if (nb == 4)
		   ft_putstr("four");
		if (nb == 5)
		   ft_putstr("five");
		if (nb == 6)
		   ft_putstr("six");
		if (nb == 7)
		   ft_putstr("seven");
		if (nb == 8)
		   ft_putstr("eight");
		if (nb == 9)
		   ft_putstr("nine");
		if (nb == 0)
		   ft_putstr("zero");
	}	
}

void	put_str10a20(int nb)
{
	if (nb == 10)
		ft_putstr("ten");
	if (nb == 11)
	   ft_putstr("eleven");
	if (nb == 12)
	   ft_putstr("twelve");
	if (nb == 13)
	   ft_putstr("thirteen");
	if (nb == 14)
	   ft_putstr("fourteen");
	if (nb == 15)
	   ft_putstr("fifteen");
	if (nb == 16)
	   ft_putstr("sixteen");
	if (nb == 17)
	   ft_putstr("seventeen");
	if (nb == 18)
	   ft_putstr("eighteen");
	if (nb == 19)
	   ft_putstr("nineteen");
}

void	put_str20(int nb)
{
	if (nb >= 20 && nb <= 29)
		ft_putstr("twenty");
	if (nb >= 30 && nb <= 39)
		ft_putstr("thirty");
	if (nb >= 40 && nb <= 49)
		ft_putstr("fourty");
	if (nb >= 50 && nb <= 59)
		ft_putstr("fifty");
	if (nb >= 60 && nb <= 69)
		ft_putstr("sixty");
	if (nb >= 70 && nb <= 79)
		ft_putstr("seventy");
	if (nb >= 80 && nb <= 89)
		ft_putstr("eighty");
	if (nb >= 90 && nb <= 99)
		ft_putchar("ninety");
	if (ft_strlen(nb) == 3)
		ft_putstr("hundred");
}

/*
void put_str_100(int nb)
{
	if (ft_strlen(atoi(nb)) == 4)
		ft_putchar("thousand");
	if (ft_strlen(nb) == 7)
		ft_putchar("million");
	if (ft_strlen(nb) == 10)
		ft_putchar("billion");
	if (ft_strlen(nb) == 13)
		ft_putchar("trillion");
	if (ft_strlen(nb) == 16)
		ft_putchar("quadrillion");
	if (ft_strlen(nb) == 19)
		ft_putchar("quintillion");
	if (ft_strlen(nb) == 22);
		ft_putchar("sextillion");
	if (ft_strlen(nb) == 25)
		ft_putchar("septillion");
	if (ft_strlen(nb) == 28)
		ft_putchar("octillion");
	if (ft_strlen(nb) == 31)
		ft_putchar("nonillion");
	if (ft_strlen(nb) == 34)
		ft_putchar("decillion");
	if (ft_strlen(nb) == 37)
		ft_putchar("undecillion");
}
*/
#include <stdio.h>

int main()
{

	char *nbr;
	nbr = "25";
	//	printf("%d\n", ft_atoi("1234567"));
	
	if (ft_atoi(nbr) >= 0 && ft_atoi(nbr) <=9)
		put_str_10(ft_atoi("0"), "0");
	ft_putchar('\n');
	put_str10a20(ft_atoi("17"));
}
