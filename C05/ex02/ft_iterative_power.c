/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:21:31 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/23 13:14:04 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else 
	{
		while (power >= 1)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

int main(void)
{
	int nb;
	int power;

	nb = 4;
	power = 6;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
