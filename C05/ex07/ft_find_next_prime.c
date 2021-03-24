/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:56:33 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/24 17:07:19 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	if (nb > 0)
	{
		while ((sqrt * sqrt != nb) && (sqrt < nb) && (sqrt < 46340))
			sqrt++;
	}
	if (sqrt * sqrt != nb)
		return (0);
	else
		return (sqrt);
}

int		ft_is_prime(int nb)
{
	int sqrt;
	int prime;

	sqrt = ft_sqrt(nb);
	prime = 2;
	while ((nb % prime != 0) && (prime < nb))
		prime++;
	if (nb % prime == 0)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb) == 1) ? (nb) : (ft_find_next_prime(nb + 1));
}

int	main(void)
{
	int i;
	i = 602;
	printf("%d\n", ft_find_next_prime(i));
	return (0);
}
