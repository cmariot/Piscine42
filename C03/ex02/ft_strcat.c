/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:15:02 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/17 15:25:43 by cmariot          ###   ########.fr       */
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

char *ft_strcat(char *dest, char *src)
 {
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
			i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
        j++;
		i++;
	}
	dest[i + 1] = '\0';
	return dest;
 }

 int main(void)
{
	char source[6] = "source";
    char destination[30] = "destination";
	ft_strcat(destination, source);
	ft_putstr(destination);
	return (0);
}
