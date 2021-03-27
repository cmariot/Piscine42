/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 14:27:44 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/27 16:49:56 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *get_nbr(char *str)
{
	char *nbr;
	int nbr_len;
	int i;

	nbr_len = 0;
	while (str[nbr_len] >= '0' && str[nbr_len] <= '9')
		nbr_len++;
	if(!(nbr = (char *)malloc(sizeof(char) * (nbr_len + 1))))
			return (NULL);
	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr[i] = str[i];
			i++;
		}
	}
	nbr[i] = '\0';
	return (nbr);
}

int get_sep_len(char *str)
{
	int sep_len;
	int i;

	i = 0;
	while(str[i] >= '0' || str[i] <= '9')
		i++;
	sep_len = 0;
	while (str[i + sep_len] == ' ' || str[i + sep_len] == ':')
		sep_len++;
	return (sep_len);
}

char *get_nbr_name(char *str)
{
	char *nbr_name;
	int name_len;
	int i;
	int j;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ')
	   i++;	
	name_len = 0;
	while (str[i] > 32 && str[i++] <= 126)
		name_len++;
	if (!(nbr_name = (char *)malloc(sizeof(char) * (name_len + 1))))
		return (NULL);
	j = 0;
	i = (i - name_len);
	while (str[i] != '\n' || str[i] == '\0')
		nbr_name[j++] = str[i++];
	nbr_name[j] = '\0';
	return (nbr_name);
}

int	main(void)
{
	char *to_convert;
	char *number;
	char *name;
	
	to_convert = "1234 :  one-thousand_hundred";
	number = get_nbr(to_convert);	
	printf("%s\n", number);
	name = get_nbr_name(to_convert);
	printf("%s\n", name);

	free(number);
	free(name);
	return(0);
}
