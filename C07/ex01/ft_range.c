/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:45:44 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 08:13:53 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int range;
	int *tab;
	int i;

	if (min >= max)
		return NULL;
	range = max - min;
	if (!(tab = (int *)malloc(sizeof(*tab) * range)))
		return NULL;
	i = 0;
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int min;
	int max;
	int *tab;
	int i;
	int range;

	min = 0;
	max = 11;
	range = max - min;
	tab = ft_range(min, max);
    i = 0;
	while (i < range)
    {
        printf("%d\n", tab[i]);
        i++;
    }
	free(tab);
	return (0);
}
