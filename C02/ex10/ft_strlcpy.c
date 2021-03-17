/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 07:55:00 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/17 10:24:05 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	char c;
	i = 0;
	while ((src[i] != '\0') && (i <= size - 1))
	{
		c = src[i];
		dest[i] = c;
		i++;
	}
	dest[i] = '\0';


	return (size + 1);

}

int main(void)
{
	char source[10] = "toto +tata";
    char destination[10] = "too +tata";
    unsigned int taille_destination = 10;

//	char source2[10] = "toto +tata";
//   char destination2[10] = "too +tata";
//    unsigned int taille_destination2 = 10;

	ft_putstr(destination);
	ft_putstr("\n\n");
	ft_putstr(destination);
	ft_putstr("\n\n");
    printf("perso: %d\n", ft_strlcpy(destination, source, taille_destination));
    printf("relle: %zu\n", strlcpy(destination, source, taille_destination));
	return (0);
}
