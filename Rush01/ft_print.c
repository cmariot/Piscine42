/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 15:58:35 by ahocine           #+#    #+#             */
/*   Updated: 2021/03/21 17:40:48 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bib.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	if ((nbr = nb) < 0)
	{
		nbr = -nb;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr((int)(nbr / 10));
	ft_putchar(nbr % 10 + '0');
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
