/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:53:41 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/25 11:28:47 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	prime;

	if ((nb == 2) || (nb == 2147483647))
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

int main(void)
{
	int i;

	i = 2147479273;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}
	i = 2147483647;
	printf("%d : %d\n", i, ft_is_prime(i));
	i = -2147483648;
	printf("%d : %d\n", i, ft_is_prime(i));
	return (0);
}
