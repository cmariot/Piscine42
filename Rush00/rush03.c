/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hduissi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:23:57 by hduissi           #+#    #+#             */
/*   Updated: 2021/03/13 15:44:07 by hduissi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    ft_print_letters(int i, int j, int x, int y);



void    ft_print_letters(int i, int j, int x, int y)
{

    if ((i == 1) && ((j == 1) || (j >= y)))
    {
        ft_putchar('A');
    }
    else if ((i == x) && ((j == 1) || (j >= y)))
    {
        ft_putchar('C');
    }
    else
    {
        if ((j == 1) || (i == 1) || (j == y) || (i == x))
        {
            ft_putchar('B');
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
			ft_print_letters(i, j, x, y);
			i++;
		}
		ft_putchar(10);
		j = j + 1;
	}
}
