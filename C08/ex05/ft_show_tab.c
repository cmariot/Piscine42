/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:56:00 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/30 17:14:01 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHOW_TAB_C
# define FT_SHOW_TAB_C

//# include "ft_stock_str.h"
# include <unistd.h>
# include <stdlib.h>

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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int n)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if ((nb >= 0) && (nb <= 9))
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (*par.size != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
	//	ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		par++;
	}
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
	ft_show_tab(&test);
	return (0);
}


