/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 09:43:45 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/30 16:32:22 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRS_TO_TAB_C
# define FT_STRS_TO_TAB_C

#include "ft_stock_str.h"
#include <stdlib.h>

#endif

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
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *tab;
	if (!(tab = malloc(sizeof(tab) * ac + 1)))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);	
		tab[i].str = ft_strdup(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (&*tab);
}

int		main(void)
{
	char *av[3];
	int ac;

	av[0] = "lol";
	av[1] = "pouet";
	av[2] = "toto";
	ac = 3;
	t_stock_str test;
	test = *ft_strs_to_tab(ac, av);
	return (0);
}
