/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:03:19 by ahocine           #+#    #+#             */
/*   Updated: 2021/03/21 18:00:49 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIB_H
# define BIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/*
**				FT_SOLVE.c
*/

int		ft_number_alone(int **tab, int row, int col);
int		ft_check_row(int **tab, int **cond, int dir, int is_rev);
int		ft_check_col(int **tab, int **cond, int dir, int is_rev);
int		ft_hered(int **tab, int **cond, int iter);

/*
**				FT_PRINT.c
*/

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

/*
**				FT_SET_DISPLAY.c
*/

int		**convert_char_to_arr(char *str);
int		**ft_set_display(void);
void	ft_print_display(int ***board);

#endif
