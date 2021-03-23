/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:53:21 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/23 17:39:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	long_nb;
	int			nb2;
	int			base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	long_nb = 0 + nbr;
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
		nb2 = long_nb / base_len;
		ft_putnbr_base(nb2, base);
		ft_putchar((long_nb % base_len) + '0');
	}
}

int	main(void)
{
	int nb;
	char *base;

	nb = 16;
	base = "01";
	ft_putnbr_base(nb, base);
	ft_putchar('\n');
}
