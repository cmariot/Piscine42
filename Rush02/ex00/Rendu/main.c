/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:18:10 by cmariot           #+#    #+#             */
/*   Updated: 2021/03/28 17:39:00 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"

char	*find_in_buf(char *buf, char *value_to_convert)
{
	int		line_len;
	char	*found_line;
	char	*line;
	char	*nbr_line;
	int		i;

	found_line = ft_strstr(buf, value_to_convert);
	if (ft_strncmp(found_line, "Dict Error\n", ft_strlen(found_line)) == 0)
		return ("Dict Error\n");
	line_len = ft_linelen(found_line);
	if (!(line = (char *)malloc(sizeof(char) * (line_len + 1))))
		return ("Dict Error\n");
	i = 0;
	while (found_line[i] != '\n')
	{
		line[i] = found_line[i];
		i++;
	}
	line[i] = '\0';
	nbr_line = get_nbr_name(line);
	free(line);
	return (nbr_line);
}

int		open_dictionary(char *path, char *value_to_convert)
{
	int		file_descriptor;
	char	buf[BUF_SIZE + 1];
	int		read_return;
	int		close_descriptor;
	char	*nbr_name;

	file_descriptor = open(path, O_RDONLY, O_APPEND);
	if (file_descriptor == -1)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	read_return = read(file_descriptor, buf, BUF_SIZE);
	buf[read_return] = '\0';
	nbr_name = find_in_buf(buf, value_to_convert);
	ft_putstr(nbr_name);
	free(nbr_name);
	close_descriptor = close(file_descriptor);
	if (close_descriptor == -1)
		ft_putstr("Dict Error\n");
	return (0);
}

int		main(int argc, char **argv)
{
	char	*reference_dictionary;
	char	*value_to_convert;

	if (argc == 2)
	{
		value_to_convert = argv[1];
		if (ft_is_it_a_validate_unsigned_int(value_to_convert) == 1)
			open_dictionary("./dictionary.txt", value_to_convert);
		else
			ft_putstr("Error\n");
		return (0);
	}
	else if (argc == 3)
	{
		reference_dictionary = argv[1];
		value_to_convert = argv[2];
		if (ft_is_it_a_validate_unsigned_int(value_to_convert) == 1)
			open_dictionary(reference_dictionary, value_to_convert);
		else
			ft_putstr("Error\n");
		return (0);
	}
	ft_putstr("Error\n");
	return (0);
}
