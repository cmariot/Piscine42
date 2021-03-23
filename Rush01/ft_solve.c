/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:06:28 by ahocine           #+#    #+#             */
/*   Updated: 2021/03/21 18:49:29 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bib.h"

int		ft_check_row(int **board, int **tab_arg, int sens, int rev)
{
	int count;
	int col;
	int row;
	int top;

	row = 0;
	while (row < 4)
	{
		if (tab_arg[sens * 4 + row][col] != '\0')
		{
			col = rev ? 0 : 3;
			count = 0;
			top = 0;
			while ((rev && row >= 0) || (!rev && row < 4))
			{
				if (board[row][col] > top)
				{
					count++;
					top = board[row][col];
				}
				if (count != tab_arg[1][sens * 4 + row])
					return (0);
				col += rev ? 1 : -1;
			}
			row++;
		}
	}
	if (count == tab_arg[1][sens * 4 + row] && col == 4)
		return (1);
	else
		return (0);
}

int		ft_check_col(int **board, int **tab_arg, int dir, int rev)
{
	int count;
	int col;
	int row;
	int top;

	col = 0;
	while (col < 4)
	{
		row = 0;
		if (tab_arg[4 * dir + row][col] != 0)
		{
			count = 0;
			top = 0;
			col = rev ? 3 : 0;
			while ((rev && row >= 0) || (!rev && row < 4))
			{
				if (board[row][col] > top)
					count++;
				row += rev ? -1 : 1;
			}
			if (tab_arg[dir * 4 + col][col] != count)
                return (1);
		}
		col++;
	}
	return (0);
}

int		ft_number_alone(int **tab, int row, int col)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if ((i != col && tab[row][i] == tab[row][col]) ||
			(i != row && tab[i][col] == tab[row][col]))
			return (0);
		i++;
	}
	return (1);
}

int		ft_hered(int **board, int **args, int rep)
{
	int row;
	int col;
	int i;

	if (rep == 16)
	{
		return (ft_check_col(board, args, 0, 0)
				&& ft_check_col(board, args, 1, 1)
				&& ft_check_row(board, args, 2, 0)
				&& ft_check_row(board, args, 3, 1));
				printf("FINAL BOARD\n");
				ft_print_display(&board);
	}
	printf("%d\n", rep);
	row = rep / 4;
	col = rep % 4;
	i = 1;
	printf("\n\n");
	while (i < 5)
	{
		board[row][col] = i;
		i++;
		if (ft_number_alone(board, row, col) && ft_hered(board, args, rep + 1))
        {
            return (1);
			printf("EXIT SUCCESS\n");
        }
	}
	board[row][col] = 0;
	return (0);
}
