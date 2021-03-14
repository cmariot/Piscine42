/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:37:12 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/12 15:41:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int a);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen (char* str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


int main()
{
	char *toto = "12345678901234567890";
	int length = ft_strlen(toto);
	ft_putnbr(length);
	return(0);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if ( (nb >= 0) && (nb <= 9) )
	{
		int a;
		a = 48 + nb;
		ft_putchar(a);
	}

	else
	{
		int b;
		b = nb / 10;
		ft_putnbr(b);

		int c;
		c = (nb % 10) + 48;
		ft_putchar(c);
	}


	
	
/*	//Si nombre compris entre 0 et 9 : l'afficher
	int a;
	a = '0' + nb;
	
	if ( (a >= 0) && (a <= 9) ) {
		write(1, &a, 5);
	}
	
	//Si nombre compris entre 10 et 99
	else if (a > 9  )
	{
			int b;
			b = a % 10;
			write(1, &b, 1);
			a = a /10;
	
			ft_putnbr(a);
	}
 */
	
	
}



