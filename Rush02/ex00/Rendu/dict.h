/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esivre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 16:13:43 by esivre            #+#    #+#             */
/*   Updated: 2021/03/28 18:18:01 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 710

int						open_dictionary(char *path, char *value_to_convert);
char					*find_in_buf(char *buf, char *value_to_convert);
void					ft_putchar(char c);
void					ft_putstr(char *str);
int						ft_strlen(char *str);
int						ft_linelen(char *str);
unsigned long long		ft_atoi(char *str);
int						ft_is_it_a_validate_unsigned_int(char *str);
int						ft_strncmp(char *s1, char *s2, unsigned int n);
char					*ft_strstr(char *str, char *to_find);
char					*get_nbr_name(char *str);
int						ft_recursive_power(int nb, int power);
int						ft_size(long n);

#endif
