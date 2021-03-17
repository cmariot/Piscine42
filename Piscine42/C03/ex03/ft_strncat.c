/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:56:58 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/17 16:00:11 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

char *ft_strncat(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
			i++;
	j = 0;
	while ((src[j] != '\0') && (j <= (n - 1)))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char source[] = "source";
	char destination[15] = "destination";
	unsigned int size;

	size = 4;
	ft_strncat(destination, source, size);
	ft_putstr(destination);
	return (0);
}
