/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 08:29:33 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/24 10:38:14 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if ((nb == 1) || (nb == 0))
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (factorial = nb * ft_recursive_factorial(nb - 1));
}
