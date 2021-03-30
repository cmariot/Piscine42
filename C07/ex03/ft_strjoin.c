/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:25:11 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 15:10:24 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
<<<<<<< HEAD
#include <unistd.h>
=======
>>>>>>> ee1c1adb0f326ad1bb92e430e6d7cfc24c400374

int		ft_strlen(char *str)
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
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
<<<<<<< HEAD
	int		i;
	int		total_len;
	char	*str;

	if (!(str = malloc(sizeof(char))))
		return (NULL);
	if (size == 0)
=======
	int i;
	int total_len;
	char *str;
	
	if (size <= 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
>>>>>>> ee1c1adb0f326ad1bb92e430e6d7cfc24c400374
		return (str);
	i = 0;
	total_len = 0;
	while (i < size)
<<<<<<< HEAD
		total_len = total_len + ft_strlen(strs[i++]);
	total_len = total_len + ft_strlen(sep) * (size - 1);
	if (!(str = malloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	str[total_len] = '\0';
=======
		total_len = total_len + 1 + ft_strlen(strs[i++]);
	total_len = total_len + (ft_strlen(sep) * (size - 1) + 1);
	if (!(str = malloc(sizeof(char) * total_len)))
			return NULL;
	*str = 0;
>>>>>>> ee1c1adb0f326ad1bb92e430e6d7cfc24c400374
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
<<<<<<< HEAD
}
=======
}
>>>>>>> ee1c1adb0f326ad1bb92e430e6d7cfc24c400374
