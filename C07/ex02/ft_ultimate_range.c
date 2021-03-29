/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 08:14:06 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 09:24:20 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;
	int range_size;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = min;
	while (i < max)
	{
		tab[i] = i + 1;
		printf("%d\n", tab[i]);
		i++;
	}
	if (!(range = malloc(sizeof(int*) * (max - min))))
		return (-1);
	i = min;
	range_size = 0;
	while (i < max)
	{
		range[i] = &tab[i];
		range_size++;
		printf("%p\n", range[i]);
		i++;
	}
	return (range_size);
}

int		main(void)
{
	int min;
	int max;
	int **range;
<<<<<<< HEAD

	if (!(range = malloc(sizeof(int) * (max - min))))
		return (-1);
	*range = (*void);
	min = 3;
	max = 6;
	range = 3;
	ft_ultimate_range(range, min, max);
=======
	
	min = 4;
	max = 4;
	range = NULL;
	printf("%d\n", ft_ultimate_range(range, min, max));
>>>>>>> 18fa4a9a7e789a411913ecfc3cd0da23c87a61dc
	return (0);
}

