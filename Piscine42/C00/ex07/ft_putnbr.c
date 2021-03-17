/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:37:12 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/16 07:51:51 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int po)
{
	int			a;
	int			b;
	int			c;
	long int	nb;

	nb = po;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if ((nb >= 0) && (nb <= 9))
	{
		a = 48 + nb;
		ft_putchar(a);
	}
	else
	{
		b = nb / 10;
		ft_putnbr(b);
		c = (nb % 10) + '0';
		ft_putchar(c);
	}
}
