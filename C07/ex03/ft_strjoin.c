/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:25:11 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 14:22:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
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
	dest[i] = '\0';
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int total_len;
	int sep_len;
	char *str;

	i = 0;
	total_len = 0;
	str = "";
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	total_len = total_len + sep_len * (size - 1);
	printf("%d\n", total_len);
	if (!(str = malloc(sizeof(char) * (total_len + 1))))
			return NULL;
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}


int	main(void)
{
	int size;
	char *strs[3];
	char *sep;
	char *verif;

	sep = "-";	
	size = 3;
	strs[0] = "tototo";
	strs[1] = "ta";
	strs[2] = "ti";
	verif = ft_strjoin(size, strs, sep);
	ft_putstr(verif);
	printf("%s\n", verif);
	free(verif);
	return (0);
}
