/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 16:13:51 by ahocine           #+#    #+#             */
/*   Updated: 2021/03/21 18:07:41 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bib.h"

int		**ft_set_display(void)
{
	int		i;
	int		j;
	int		**board;

	board = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		board[i] = (int *)malloc(sizeof(int) * 4);
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	return (board);
}

void	ft_print_display(int ***board)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr((*board)[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		**convert_char_to_arr(char *str)
{
	int		**arr;
	int		i;
	int		j;

	arr = (int **)malloc(sizeof(int *) * 2);
	arr[0] = (int *)malloc(sizeof(int) * 16);
	arr[1] = (int *)malloc(sizeof(int) * 16);
	i = -1;
	j = 0;
	while (++i < 4)
	{
		arr[0][i] = 0;
		arr[1][i] = str[j] - '0';
		j += 2;
	}
	while (++i < 8)
	{
		arr[0][i] = 3;
		arr[1][i] = str[j] - '0';
		j += 2;
	}
	while (++i < 12)
	{
		arr[0][i] = 1;
		arr[1][i] = str[j] - '0';
		j += 2;
	}
	while (++i < 16)
	{
		arr[0][i] = 2;
		arr[1][i] = str[j] - '0';
		j += 2;
	}
	return (arr);
}
