/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:50:11 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/24 12:06:45 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r' || c == 32)
		return (1);
	else
		return (0);
}

int		ft_count_minus(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int minus_counter;
	int nb;

	i = 0;
	nb = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	minus_counter = 0;
	while (ft_count_minus(str[i]) == 1)
	{
		if (str[i] == '-')
			minus_counter++;
		i++;
	}
	if (minus_counter % 2 != 0)
		minus_counter = -1;
	else
		minus_counter = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * minus_counter);
}
