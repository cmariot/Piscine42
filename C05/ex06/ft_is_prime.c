/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:53:41 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/24 21:36:34 by charles          ###   ########.fr       */
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
