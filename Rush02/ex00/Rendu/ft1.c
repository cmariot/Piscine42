/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:33:16 by esivre            #+#    #+#             */
/*   Updated: 2021/03/28 18:07:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int					ft_linelen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n' || str[i] == '\0')
		i++;
	return (i);
}

unsigned long long	ft_atoi(char *str)
{
	unsigned int			i;
	unsigned long long		nb;
	unsigned int			str_len;

	str_len = ft_strlen(str);
	i = 0;
	nb = 0;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (str_len == i)
		return (nb);
	else
		return (999999999999);
}
