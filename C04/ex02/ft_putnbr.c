/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:49:11 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/24 07:49:46 by cmariot          ###   ########.fr       */
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
