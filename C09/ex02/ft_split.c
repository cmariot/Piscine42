/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:37:24 by cmariot           #+#    #+#             */
/*   Updated: 2021/04/01 13:35:39 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i= 0;
	while (*str++)
		i++;
	return (i);
}
char 	**ft_split(char *str, char *charset)
{
	char **strs;
	int i;
	int j;
	int nombre_mots = 0;
	int taille_mots = 0;

	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j])
				nombre_mots++;
			j++;
		}
		i++;
	}
	printf("nombre mots : %d\n", nombre_mots);
	if(!(strs = malloc(sizeof(char *) * nombre_mots + 1)))
			return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		taille_mots++;
		j = 0;
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j])
			{
				printf("taille : %d\n",taille_mots);
				taille_mots = 1;
			}
			j++;
		}
		i++;
	}
	return (strs);
}


int	main(void)
{
	char *str;
	char *charset;

	str = "LALAA";
	charset = "A";
	ft_split(str, charset);
	return (0);
}
