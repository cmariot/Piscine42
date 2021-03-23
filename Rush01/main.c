/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:36:37 by ahocine           #+#    #+#             */
/*   Updated: 2021/03/21 18:47:22 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bib.h"

int		main(int argc, char **argv)
{
	int **board;
	int **tab_arg;

	if (argc == 2)
	{
		board = ft_set_display();
		tab_arg = convert_char_to_arr(argv[1]);
		if (ft_hered(board, tab_arg, 0))
        {
            ft_print_display(&board);
			return (0);
        }
	}
	ft_putstr("_Error_\n");
	return (-1);
}
