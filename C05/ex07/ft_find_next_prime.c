/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:56:33 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/25 09:45:48 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	prime;

	if (nb == 2)
		return (1);
	if ((nb < 2) || (nb % 2 == 0))
		return (0);
	prime = 3;
	while (nb >= prime * prime)
	{
		if (nb % prime == 0)
			return (0);
		prime += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb) == 1) ? (nb) : (ft_find_next_prime(nb + 1));
}

int	main(void)
{
	int i;
	i = 4;
	printf("%d\n", ft_find_next_prime(i));
	return (0);
}
