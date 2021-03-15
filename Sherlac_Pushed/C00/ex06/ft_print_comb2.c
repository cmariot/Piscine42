/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:28:46 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/14 13:37:52 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_comb(int i, int j, int k, int l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(32);
	ft_putchar(k);
	ft_putchar(l);
	if ((i == '9') && (j == '8') && (k == '9') && (l == '9'))
	{
		ft_putchar(46);
	}
	else
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void ft_count(int i, int j, int k, int l)
{
    if (k == '0')
    {
        l = j + 1;
        k = i;
    }
    else
    {
        l = '0';
    }
    while (l <= '9')
    {
        ft_display_comb(i, j, k, l);
        l++;
    }
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

    i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
        {
			k = '0';
            while (k <= '9')
            {
                ft_count(i, j, k, l);
                k++;
            }
			j++;
		}
		i++;
	}
}

int main(void)
{
    ft_print_comb2();
    return(0);
}
