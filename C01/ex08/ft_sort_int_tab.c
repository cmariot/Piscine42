/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:34:24 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/16 08:36:35 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int stock;

	i = 0;
	stock = 48;
	while (i < size)
	{
		j = 0;
		while (j < (size - i))
		{
			if (tab[i] > tab[i + j])
			{
				stock = tab[i];
				tab[i] = tab[i + j];
				tab[i + j] = stock;
			}
			j++;
		}
		i++;
	}
}
