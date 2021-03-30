/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 08:14:06 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 17:54:02 by cmariot          ###   ########.fr       */
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
	i = 0;
	range_size = 0;
	while (i < max)
	{
		tab[i] = min + i;
		range_size++;
		i++;
	}
	range = &tab;
	return (range_size);
}

int	main(void)
{
	int **range;
	int min;
	int max;

	range = NULL;
	min = 0;
	max = 6;
	printf("%p\n", range);
	printf("%d\n", ft_ultimate_range(range, min, max));
	printf("%p", range);
	return (0);
}
