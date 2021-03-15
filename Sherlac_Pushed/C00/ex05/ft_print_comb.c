/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:22:10 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/14 12:22:27 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (!(i == '7' && j == '8' && k == '9'))
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while (i < '8')
	{
		j = i + 1;
		while (j < '9')
		{
			k = j + 1;
			while (k < ':')
			{
				ft_display(i, j, k);
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	ft_putchar(10);
}
