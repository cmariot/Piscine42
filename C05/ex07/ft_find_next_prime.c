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

int	ft_is_prime(int nb)
{
	int	prime;

	if (nb < 2)
		return (0);
	prime = 2;
	while (nb >= prime * prime)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	return (ft_is_prime(nb) == 1) ? (nb) : (ft_find_next_prime(nb + 1));
}
