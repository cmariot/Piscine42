/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:24:30 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/23 08:28:00 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;
	long int long_nb;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		factorial = 1;
		long_nb = 0 + nb;
		while (long_nb > 1)
		{
			factorial = factorial * long_nb;
			long_nb--;
		}
		return (factorial);
	}
}

int main(void)
{
	int i;

	i = 12;
	printf("%d\n", ft_iterative_factorial(i));
	return (0);
}
