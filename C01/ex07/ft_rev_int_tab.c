/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:33:35 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/17 14:06:18 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int backup[size];
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		backup[i] = tab[i];
		i++;
	}
	i = 0;
	j = size - 1;
	while (i <= j)
	{
		tab[i] = backup[j];
		i++;
		j--;
	}

}

int main ()
{
	int tableau[5];
	int i;
	char c;

	tableau[0] = 2;
	tableau[1] = 2;
	tableau[2] = 3;
	tableau[3] = 0;
	tableau[4] = -8;
	i = 0;
	ft_rev_int_tab(tableau, 5);
	while (tableau[i] != '\0')
	{
		c = tableau[i] + '0';
		write(1, &c, 1);
		i++;
	}
	return 0;
}
