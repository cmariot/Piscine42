/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:15:04 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/23 13:52:51 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
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
	else if (power == 1)
	{

		return (result * nb);	
	}
	else 
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);	
	}
}

int main(void)
{
	int nb;
	int power;

	nb = 3;
	power = 6;
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
}
