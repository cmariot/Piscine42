/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 08:01:25 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/29 08:09:32 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strdup(char *src)
{
	int		src_len;
	char	*cpy;
	int		i;

	src_len = ft_strlen(src);
	if (!(cpy = malloc(sizeof(char) * (src_len + 1))))
		return NULL;
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int		main(void)
{
	char *str;
	char *copy;

	str = "Salut test";
	copy = ft_strdup(str);
	ft_putstr(copy);
	free(copy);
	ft_putstr(copy);
	return (0);
}
