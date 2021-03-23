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
	int			diviseur;
	int			result;
	int			base_len;
	int			j;
	long int	long_nb;

	long_nb = nbr + 0;
	base_len = 0;
	while (base[base_len] != '\0')
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return;
		j = 0;
		while (base[j] != '\0')
		{
			if (base[base_len] == base[j])
				return;
			j++;
		}
		base_len++;
	}
	if (base_len <= 1)
			return;
	if (nbr < 0)
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
	int nb;
	char *base;

	nb = 2147483647;
	base = "+1234567890";
	ft_putnbr_base(nb, base);
}
