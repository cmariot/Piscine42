/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:51:23 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/19 15:20:44 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_convert_to_hexa(char c)
{
	char *table_hexa;

	table_hexa = "0123456789abcdef";
	if (c >= 16)
	{
		ft_putchar('\\');
		ft_putchar(table_hexa[c / 16]);
		ft_putchar(table_hexa[c % 16]);
	}
	else
	{
		ft_putchar('\\');
		ft_putchar(table_hexa[0]);
		ft_putchar(table_hexa[c / 1]);
	}
	return (c);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j <= i - 1)
	{
		if ((str[j] <= 31) || (str[j] == 127))
		{
			ft_convert_to_hexa(str[j]);
		}
		else
		{
			write(1, &str[j], 1);
		}
		j++;
	}
}
