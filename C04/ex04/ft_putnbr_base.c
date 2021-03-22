/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:53:21 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/22 15:54:08 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	long_nb;
	int			nb2;

	long_nb = 0 + nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	if ((long_nb >= 0) && (long_nb <= 9))
	{
		ft_putchar('0' + long_nb);
	}
	else
	{
		nb2 = long_nb / 10;
		ft_putnbr(nb2);
		ft_putchar((long_nb % 10) + '0');
	}
}

void	ft_putnbr_base(int nbr, char *base)
{


}

int	main(void)
{
	char *decimale = "0123456789";
	char *binaire = "01";
	char *hexadecimale = "01234567ABCDEF";
	char *poneyvif = "01234567";
	int nb;

	nb = 16654;
	ft_putnbr_base(
}
