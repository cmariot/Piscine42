/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduissi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 09:26:13 by hduissi           #+#    #+#             */
/*   Updated: 2021/03/14 11:16:12 by hduissi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_letters(int i, int j, int x, int y);

void	ft_print_letters(int i, int j, int x, int y)
{
	if ((i == 1) && (j == 1))
		ft_putchar('/');
	else if (((j == x) && (i == y)) || ((j == 1) && (i == 1)))
		ft_putchar('/');
	else if (((j >= x) && (i == 1)) || ((i >= y) && (j == 1)))
		ft_putchar(92);
	else
	{
		if ((j == 1) || (i == 1) || (i >= y) || (j >= x))
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(32);
		}
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			ft_print_letters(j, i, x, y);
			i++;
		}
		ft_putchar(10);
		j++;
	}
}
